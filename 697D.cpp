#include <bits/stdc++.h>
using namespace std;
long double ans[100001]={0};
vector<long long int > arr[100001];
long long int dp[100001]={0};
long long int DFS1(long long int st)
{
long long int q=0;
for(long long int y=0;y<arr[st].size();y++)
q+=DFS1(arr[st][y]);
return(dp[st]=q+1);
}
 
void DFS2(long long int st)
{
for(long long int e=0;e<arr[st].size();e++)
{
	long long int f=arr[st].size();
ans[arr[st][e]]=ans[st]+(dp[st]-dp[arr[st][e]]-1)/2.0+1.0;
DFS2(arr[st][e]);

}
}










int main()
{
long long int n;
cin>>n;
for(long long int w=2;w<=n;w++)
{
long long int g;
cin>>g;
arr[g].push_back(w);
}
DFS1(1);
ans[1]=1;
DFS2(1);
cout << setprecision(8);
for(long long int w=1;w<=n;w++)
cout<<ans[w]<<" ";




}