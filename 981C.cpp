#include <bits/stdc++.h>
using namespace std;
vector<int > arr[1111111];
int check[1111111]={0};
int xxx;
void DFS(int start)
{
if(check[start]==1)
	return;
xxx=start;
check[start]=1;
for(int e=0;e<arr[start].size();e++)
	DFS(arr[start][e]);


}





int main()
{

int n;
cin>>n;
int deg[1111111]={0};
for(int e=1;e<=n-1;e++)
{

int a,b;
cin>>a>>b;
arr[a].push_back(b);
arr[b].push_back(a);
deg[a]+=1;
deg[b]+=1;
}

int mx=-1;
int man;
int u=0;
for(int e=1;e<=n;e++)
{
if(deg[e]>mx)
{
mx=deg[e];
man=e;
}

if(deg[e]>=3)
	++u;
}
if(u<=1)
{ cout<<"Yes"<<endl;
	check[man]=1;
	cout<<arr[man].size()<<endl;
for(int e=0;e<arr[man].size();e++)
{
DFS(arr[man][e]);
cout<<man<<" "<<xxx<<endl;
}
}
else
	cout<<"No";





}

 