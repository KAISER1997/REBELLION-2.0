#include <bits/stdc++.h>
using namespace std;
map<int,int > seg,prt;
void brazil(int i,int start,int stop,int l,int r,int k)
{
int mid=(start+stop)/2;
if(start>r || stop<l || start>stop)
return;

if(l<=start && r>=stop)
{ //cout<<"D";
if(seg[i]==0)
	{   for(int e=start;e<=stop;e++)
		if(e!=k && prt[e]==0)
			prt[e]=k;
	seg[i]=k;
}
else
{
	if(prt[seg[i]]==0 && seg[i]<=r && seg[i]>=l && k!=seg[i])
prt[seg[i]]=k;

}
}
else
{


brazil(2*i,start,mid,l,r,k);
  brazil(2*i+1,mid+1,stop,l,r,k);
}

}

int main()
{
int n,m;
cin>>n>>m;
for(int e=1;e<=m;e++)
{
int a,b,k;
cin>>a>>b>>k;
brazil(1,1,n,a,b,k);
}
for(int e=1;e<=n;e++)
	cout<<prt[e]<<" ";





}