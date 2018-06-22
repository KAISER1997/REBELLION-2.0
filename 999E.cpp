#include <bits/stdc++.h>
using namespace std;
int tp=0;
vector<int> arr[5010];
void DFS1(int start,int check[5010])
{

if(check[start]==1)
	return;
check[start]=1;
++tp;

for(int e=0;e<arr[start].size();e++)
	DFS1(arr[start][e],check);

}
void DFS2(int start,int check[5010])
{

if(check[start]==1)
	return;
check[start]=1;


for(int e=0;e<arr[start].size();e++)
	DFS2(arr[start][e],check);

}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,edges,st;
cin>>n>>edges>>st;
for(int e=1;e<=edges;e++)
{
int a,b;
cin>>a>>b;
arr[a].push_back(b);
}
int checkFF[5002]={0};
DFS2(st,checkFF);
int ans=0;
vector<pair<int,int> >pp;
for(int e=1;e<=n;e++)
{
tp=0;
int check[5010]={0};
if(e!=st)
	DFS1(e,check);
pp.push_back(make_pair(tp,e));
}

sort(pp.begin(),pp.end(),greater<pair<int,int> >());
for(int w=0;w<pp.size();w++)
{
if(checkFF[pp[w].second]==0)
{
++ans;
DFS2(pp[w].second,checkFF);
}

}
cout<<ans;



}