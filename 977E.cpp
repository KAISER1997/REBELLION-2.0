#include <bits/stdc++.h>
using namespace std;

vector<int> arr[1111111];
map<int ,int > mp;
map<int ,int > check;
int q=0;
void DFS(int start)
{
	if(check[start]==0)
		{ check[start]=1;
			if(mp[start]!=2)
				q=1;
for(int e=0;e<arr[start].size();e++)
{
DFS(arr[start][e]);


}


}

}


int main()
{
	int n,edges,total=0;;
	cin>>n>>edges;
int a,b;
	for(int e=1;e<=edges;e++)
	{
     cin>>a>>b;
     arr[a].push_back(b);
     arr[b].push_back(a);
     mp[a]+=1;
     mp[b]+=1;
	}
for(int e=1;e<=n;e++)
{
if(check[e]==0)
{ q=0;
DFS(e);
if(q==0)
total+=1;

}

}
cout<<total;


}