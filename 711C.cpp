//O(n*k*m*m)

#include <bits/stdc++.h>
using namespace std;
typedef long long int intz;
int main()
{ 
	vector<intz> arr;
	arr.push_back(-1);
	intz col[111][111]={0};
intz n,m,k;
cin>>n>>m>>k;
for(intz e=1;e<=n;e++)
{
intz u; cin>>u;
arr.push_back(u);
}
for(intz e=1;e<=n;e++)
	for(intz f=1;f<=m;f++)
		cin>>col[e][f];





	intz INF=100000000000;
	intz mint=INF;
intz dp[101][101][101]={0};
for(intz e=0;e<=100;e++)
for(intz e1=0;e1<=100;e1++)
for(intz e2=1;e2<=100;e2++)
	if(e==0 && e1==0)
		dp[e][e1][e2]=0;
	else
	dp[e][e1][e2]=INF;



for(intz g=1;g<=n;g++)
{
 
for(intz p=1;p<=k;p++)
{

for(intz h=1;h<=m;h++)
{
for(intz w=1;w<=m;w++)
{
intz cost=col[g][h];
if(arr[g]!=0 && arr[g]==h)
cost=0;
if(arr[g]!=0 && arr[g]!=h)
continue;
if(h==w && g!=1){
dp[g][p][w]=min(dp[g-1][p][w]+cost,dp[g][p][w]);
//cout<<"diez"<<g-1<<" "<<q<<" "<<w<<endl;
//cout<<dp[g][p][w]<<" "<<g-1<<" "<<p<<" "<<w<<" "<<dp[g-1][p][w]<<endl;
}
else
dp[g][p][h]=min(dp[g][p][h],dp[g-1][p-1][w]+cost);
//cout<<g<<" "<<q<<" "<<w<<" "<<dp[g][q][w]<<endl;
if(p==k && g==n)
	mint=min(mint,dp[g][p][h]);
}


}


}

}
if(mint<INF)
	cout<<mint;
else
	cout<<"-1";

}

 