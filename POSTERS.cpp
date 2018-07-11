#include<bits/stdc++.h> 
using namespace std;
map<int,int > lazy;
set<int> xx;
int k;
void update(int i,int start,int stop,int l,int r)
{
if(start>r || stop<l)
	return;


int mid=(start+stop)/2;
if(start>=l && stop<=r)
{
lazy[i]=k;

}
else
{
if(lazy[i]!=0)
{     //cout<<"die";
	lazy[2*i]=lazy[i];
	lazy[2*i+1]=lazy[i];
	lazy[i]=0;

}
update(2*i,start,mid,l,r);
update(2*i+1,mid+1,stop,l,r);

}

}

void travel(int start,int stop,int i)
{
	int mid=(start+stop)/2;

 
if(lazy[i]!=0)
{
xx.insert(lazy[i]);
lazy[i]=0;
}
else if(start==stop)
	return;
 
else
{
travel(start,mid,2*i);
travel(mid+1,stop,2*i+1);
}


}

int main()
{
	int cases;
	cin>>cases;
	for(int ew=1;ew<=cases;ew++)
	{

		xx.clear();
 lazy.clear();
int n;
cin>>n;
int mv=-1;
for(int e=1;e<=n;e++)
{
int a,b;
cin>>a>>b;
mv=max(mv,b);
k=e;
update(1,1,10000000,a,b);

}
//out<<mv;
travel(1,10000000,1);
cout<<xx.size()<<endl;


}
}