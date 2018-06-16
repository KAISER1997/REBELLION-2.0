#include <bits/stdc++.h>
using namespace std;
int toll[55][55]={0};
int timez[55][55]={0};
vector<int> arr[500];
int n;
int INF=9999999;
int dp[55][2000]={0};
int DFS(int start,int time)
{

//cout<<start<<endl;
	 
if(time<0)
	return(INF);
if(start==n && time!=0)
	return(INF);
if(start==n && time==0)
	return(0);
if(start!=n && time==0)
	return(INF);
int mint=INF;
if(dp[start][time]!=-1)
		return(dp[start][time]);
for(int e=0;e<arr[start].size();e++)
{
int g=toll[start][arr[start][e]]+DFS(arr[start][e],time-timez[start][arr[start][e]]);
mint=min(mint,g);
}


return(dp[start][time]=mint);

}





int main()
{
 int k;
 while(cin>>n>>k)
 {
 	if(n==0 && k==0)
 		break;
for(int g=1;g<=52;g++)
	for(int h=1;h<=1100;h++)
		dp[g][h]=-1;

for(int e=1;e<=n;e++)
{ arr[e].clear();
	for(int f=1;f<=n;f++)
		{  if(e!=f){
			//cout<<e<<" "<<f<<endl;
			arr[e].push_back(f);
		}
		cin>>timez[e][f];
	}
}
for(int e=1;e<=n;e++)
	for(int f=1;f<=n;f++)
		cin>>toll[e][f];
		int mint=INF,tm;	
for(int e=1;e<=k;e++)
{

int l=DFS(1,e);
if(l<mint)
{

mint=l;
tm=e;

}
}
cout<<mint<<" "<<tm<<endl;



}
}