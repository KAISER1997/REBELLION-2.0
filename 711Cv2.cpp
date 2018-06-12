//USING RECURSION

#include <bits/stdc++.h>
using namespace std;
typedef long long int intz;
vector<intz > arr;
	 intz dp[105][105][105]={0};
intz n,m,k;
intz col[111][111]={0};
intz INF=100000008000;
intz rec(intz pos,intz group,intz preC)
{
	if(dp[pos][group][preC]!=-1)
		return(dp[pos][group][preC]);
	if(group>k)
		return(dp[pos][group][preC]=INF);
if(pos==n+1)
{
if(group!=k)
	return(dp[pos][group][preC]=INF);
else
	return(dp[pos][group][preC]=(intz)0);
}




intz s;
intz mint=INF;
for(intz e=1;e<=m;e++)
{
	intz z=col[pos][e];
	if(arr[pos]!=0 && arr[pos]!=e)
		continue;
	if(arr[pos]!=0 && arr[pos]==e)
		z=(intz)0;
if(pos==1)
s= z+rec(pos+1,1+group,e);
else
{
if(preC==e)
	s=z+rec(pos+1,group,e);
else
	s=z+rec(pos+1,group+1,e);

}
mint=(intz)min(s,mint);
}
return(dp[pos][group][preC]=mint);
}


int main()
{
	for(intz e=0;e<=104;e++)
for(intz e1=0;e1<=104;e1++)
for(intz e2=0;e2<=104;e2++)
dp[e][e1][e2]=(intz)-1;
arr.push_back((intz)-1);
 
cin>>n>>m>>k;
for(intz e=1;e<=n;e++)
{
intz u; cin>>u;
arr.push_back(u);
}
for(intz e=1;e<=n;e++)
	for(intz f=1;f<=m;f++)
		cin>>col[e][f];

intz d=rec((intz)1,(intz)0,(intz)0);
if(d<INF)
	cout<<d;
else
	cout<<"-1";







}