#include <bits/stdc++.h>
using namespace std;
vector<int > arr[101001];
int dp[101001]={0};
int bTp[101001]={0},check[101001];
map<int ,map<int ,int > >dist;
long long  int DFS(int start,long long int x)
{
	//cout<<start<<endl;
long long int sum=0;
bTp[start]=x;
for(int e=0;e<arr[start].size();e++)
{
if(check[arr[start][e]]==0)
{
check[arr[start][e]]=1;
int z=dist[start][arr[start][e]];
sum+=z+DFS(arr[start][e],x+z);

}

}
return(dp[start]=sum);
}



int main()
{
int n;
cin>>n;
int deg[n+5]={0};
for(int e=1;e<=n-1;e++)
{
int a,b,c;
cin>>a>>b>>c;
dist[a][b]=c;
dist[b][a]=c;
deg[a]+=1; deg[b]+=1;
arr[a].push_back(b);
arr[b].push_back(a);
}
check[1]=1;
int l=DFS(1,0);
long long int mint=8000000000;
for(int e=2;e<=n;e++)
{
if(deg[e]==1)
{
	//cout<< e <<endl;
mint=min(mint,(long long)2*l-bTp[e]);

}

}
if(n==1)
mint=0;
cout<<mint;

}