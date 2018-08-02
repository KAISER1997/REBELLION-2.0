#include <bits/stdc++.h>
using namespace std;

vector<int > prim;
//int divPrime[10000002]={0};
bool prime[10000002];
int ct[10000002]={0};
int seg[70000000]={0};
int qt[10000002]={0};
 void SieveOfEratosthenes(int n)
 

 
 
{
     
    memset(prime, true, sizeof(prime));
 
    for (int p=2; p<=n; p++)
    {
        if (prime[p] == true)
        {

        	 
                    	ct[p]+=qt[p];
                    
            for (int i=p*2; i<=n; i += p)
                {prime[i] = false;
                     
                    	ct[p]+=qt[i];
                    	//cout<<p<<" "<<ct[p]<<endl;
                    
                  //  divPrime[i]=p;
                }
        }}
    for (int p=2; p<=n; p++)
       if (prime[p])
          prim.push_back(p);
}




void build(int i,int start,int stop)
{
	if(start==stop)
	{
      seg[i]= ct[prim[start]];
      return;
	}
int mid=(start+stop)/2;
build(2*i,start,mid);
build(2*i+1,mid+1,stop);
seg[i]=seg[2*i]+seg[2*i+1];
}

int query(int i,int start,int stop,int qst,int qsp)
{
	int mid=(start+stop)/2;
if(qst>stop || start>qsp)
	return(0);
if(qst<=start && qsp>=stop)
	return(seg[i]);

return(query(2*i,start,mid,qst,qsp)+query(2*i+1,mid+1,stop,qst,qsp));
}


int main()
{

	ios_base::sync_with_stdio(false);
cin.tie(NULL);
	prim.push_back(-1);
 
int n;
cin>>n;
for(int e=1;e<=n;e++)
{
int f;
cin>>f;
qt[f]+=1;
}
SieveOfEratosthenes(10000001);
// cout<<prim.size();

  build(1,1,prim.size()-1);
int q;
cin>>q;
for(int e=1;e<=q;e++)
{
int a,b;
cin>>a>>b;
b=min(b,40000001);
int q=lower_bound(prim.begin()+1,prim.end(),a)-prim.begin();
int q2=upper_bound(prim.begin()+1,prim.end(),b)-prim.begin()-1;
  
 cout<<query(1,1,prim.size()-1,q,q2)<<endl;

}


}


 