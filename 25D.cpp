#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> ii;
map<int,int > check;
map<int,map<int,int> >mp;
vector<int> arr[2000];

void DFS(int start)
{
for(int e=0;e<arr[start].size();e++)
{
if(check[arr[start][e]]==0)
{
check[arr[start][e]]=1;
mp[start][arr[start][e]]=1;
mp[arr[start][e]][start]=1;
DFS(arr[start][e]);
}
}
}





int main()
{
int n;
cin>>n;
vector<ii> x;
for(int e=1;e<n;e++)
{
	int a,b;
	cin>>a>>b;
x.push_back(ii(a,b));
arr[a].push_back(b);
arr[b].push_back(a);
}
check[1]=1;
DFS(1);
vector<ii >ll1,ll2;
for(int e=1;e<=n;e++)
{
if(check[e]==0)
{
check[e]=1;
ll1.push_back(ii(1,e));
DFS(e);
}
}
for(int e=0;e<x.size();e++)
if(mp[x[e].first][x[e].second]==0)
	ll2.push_back(x[e]);

cout<<ll1.size()<<endl;
for(int e=0;e<ll1.size();e++)
cout<<ll2[e].first<<" "<<ll2[e].second<<" "<<ll1[e].first<<" "<<ll1[e].second<<endl;





}