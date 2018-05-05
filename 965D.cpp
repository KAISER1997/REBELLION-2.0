#include <bits/stdc++.h>
using namespace std;
int bin[1111111]={0};
int limit=100002;
 

 void update(int pos  ,int val )
 
{
bin[pos]+=val;

while(pos<=limit)
{
pos=pos+(pos&(-pos));
bin[pos]+=val;
}
}
long long int sumv(int pos)
{
long long int sum=0;
	while(pos>0)
{
 
sum=sum+bin[pos];
 
pos=pos-(pos&(-pos));
} 

return(sum);
}
int vt=99999999;
void binarySearch(  int l, int r,int zf)
{
   if (r >= l)
   {
         int mid = l + (r - l)/2;
         if(sumv(mid)-zf>0){
         	//cout<<mid<<endl;
         	vt=min(vt,mid);
         	r=mid-1;
         	binarySearch(l,r,zf);
         }
         else{
         	l=mid+1;
           binarySearch(l,r,zf);
         }
 
   }
}

int main()
{
int n,len,em;
cin>>n>>len;
vector<int > kj;
for(int e=1;e<n;e++)
{cin>>em;
kj.push_back(em);
}
int g=0;
for(int r=kj.size()-1;r>=0;r--)
{   
	vt=99999999;
 ++g;
   if(g<=len)
   	update(g,+kj[r]);
 else
 {
 	//cout<<sumv(g-len-1)<<endl;
while(1!=0)
{ 
	vt=99999999;
if(kj[r]==0)
	break;
binarySearch(g-len,g-1,sumv(g-len-1));
 //cout<<vt<<endl;
if(vt!=99999999)
{
	int u=sumv(vt)-sumv(vt-1); 
	if(u<=kj[r]){
update(vt,-1*u);
update(g,+u);
kj[r]=kj[r]-u;
}
else
{
	u=kj[r];
update(vt,-1*u);
update(g,+u);
kj[r]=kj[r]-u;
break;

}

}
else
break;
}

   }


}
int ans=sumv(n-1)-sumv( n-1-len) ;
cout<<ans;



}