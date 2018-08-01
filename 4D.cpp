#include <bits/stdc++.h>
using namespace std;

int ht[5002]={0},wt[5002]={0},dt[5002][5002]={0};
int ct[5002];
int dp[5002]={0};
int n;
int recur(int p)
{
	 
	if(dp[p]!=0)
		return(dp[p]);
if(p==n)
	{    
		 
	return(0);
}

int maxx=-1;
int t=0;
for(int e=p+1;e<=n;e++)
{
if(ht[e]>ht[p] && wt[e]>wt[p])
	{    
		int j=maxx;
	maxx=max(maxx,1+recur(e));
	if(j!=maxx) t=e;
}

}
if(maxx==-1 )
{
 
return(0);
}
 
//cout<<maxx<<" "<<p<<" "<<t<<endl;
dt[maxx][p]=t;
return dp[p]=maxx;
}

int main()
{
int m;
cin>>m;
int w0,h0;
cin>>w0>>h0;
vector<pair< pair<int,int >,int > >VV;
for(int e=1;e<=m;e++)
{
int ww,hh;
cin>>ww>>hh;
if(ww>w0 && hh>h0)
VV.push_back(make_pair(make_pair(ww,hh),e));


}
sort(VV.begin(),VV.end());
n=VV.size();
for(int e=1;e<=VV.size();e++)
{
wt[e]=VV[e-1].first.first;
ht[e]=VV[e-1].first.second;
//cout<<wt[e]<<" "<<ht[e]<<endl;
ct[e]=VV[e-1].second;
}

int ans=recur(0);
cout<<ans<<endl;

int maxx=ans;
int v=0;
vector<int> rt;
while(maxx!=0)
{
int op=dt[maxx][v];
 cout<<ct[op]<<" ";
rt.push_back(ct[op]);
maxx=maxx-1;
v=op;

}
// for(int e=rt.size()-1;e>=0;e--)
// 	cout<<rt[e]<<" ";


}