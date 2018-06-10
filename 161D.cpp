#include <bits/stdc++.h>
using namespace std;
int k;
int ans=0;
vector<int > arr[50002];
int dp[50005][520]={0};
int check[50002]={0};
void DFS(int start)
{
	dp[start][0]=1;
int u=0;
for(int e=0;e<arr[start].size();e++)
{
	dp[arr[start][e]][0]=1;
if(check[arr[start][e]]==0)
{ ++u;
check[arr[start][e]]=1;
int h[510]={0};
for(int l=0;l<=k;l++)
	h[l]=dp[start][l];

DFS(arr[start][e]);

for(int l=0;l<k;l++)
{
ans+=dp[arr[start][e]][l]*h[k-(l+1)];

dp[start][l+1]+=dp[arr[start][e]][l];

}
}
}

	 




}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n>>k;
for(int e=1;e<n;e++)
{
int a,b;
cin>>a>>b;
arr[a].push_back(b);
arr[b].push_back(a);
}

check[1]=1;
DFS(1);
cout<<ans;


}