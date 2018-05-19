#include <bits/stdc++.h>
using namespace std;
 int dp[111111]={0},check[111111]={0};
 vector<int > arr[111111];
int  DFS(int start)
 {
if(check[start]==1) return 0;
check[start]=1;
int sum=0;
for(int e=0;e<arr[start].size();e++)
{
sum+=DFS(arr[start][e]);
}

return(dp[start]=sum+1);

 }



int main()
{
int n;
cin>>n;
for(int e=1;e<n;e++)
{


	int a,b;
	cin>>a>>b;
	arr[a].push_back(b);
	arr[b].push_back(a);
}

DFS(1);
if(dp[1]%2==0)
{
	int s=0;
for(int e=2;e<=n;e++)
{
if(dp[e]%2==0)
	++s;
}

cout<<s;

}
else
{
cout<<"-1";

}
}










 