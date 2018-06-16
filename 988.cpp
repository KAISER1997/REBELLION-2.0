#include <bits/stdc++.h>
using namespace std;
vector<int> arr[100000];
int dp[100000]={0};
int DFS(int start)
{
if(dp[start]!=-1)
	return(dp[start]);
	if(arr[start].size()==0)
		return(1);
	int q=0;
for(int e=0;e<arr[start].size();e++)
{
q+=DFS(arr[start][e]);
}

return(dp[start]=q);
}

int main()
{
int n;
int gg=0;
while(cin>>n)
{
	if(gg>0)
		cout<<endl;
	if(n==-1)
		break;
for(int e=0;e<n;e++)
{
	arr[e].clear();
int w;
cin>>w;
for(int f=1;f<=w;f++)
{
int lk;
cin>>lk;

arr[e].push_back(lk);
}
}
arr[n].clear();
for(int t=0;t<=n;t++)
dp[t]=-1;
int ans=DFS(0);
cout<<ans<<endl;;
++gg;
}



}




