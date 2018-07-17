#include <bits/stdc++.h>
using namespace std;

int timez=0;
vector<int > ans;
int pos[2222222]={0},st[222222]={0},sp[222222]={0};
vector<int> arr[2222222];
int DFS(int start)
{ 
	//cout<<start<<endl;
	ans.push_back(start);
	pos[start]=ans.size()-1;
	++timez;
st[start]=timez;
for(int e=0;e<arr[start].size();e++)
	DFS(arr[start][e]);
++timez;
sp[start]=timez;


}
int main()
{
int n,q,f;
cin>>n>>q;
for(int e=2;e<=n;e++)
{
cin>>f;
arr[f].push_back(e);
}
for(int e=1;e<=n;e++)
sort(arr[e].begin(),arr[e].end());
DFS(1);
for(int w=1;w<=q;w++)
{
int a,t,zx;
cin>>a>>t;
int l=pos[a];
//cout<<l+t-1<<endl;
if((l+t-1)>=ans.size())
	zx=-1;
else
{ //cout<<l+t-1<<endl;
int p=ans[l+t-1];
 //cout<< p<<endl;
if(st[a]<=st[p] && sp[p]<=sp[a])
zx=p;
else
zx=-1;

}

cout<<zx<<endl;
}
}

 