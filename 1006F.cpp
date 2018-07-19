#include <bits/stdc++.h>
using namespace std;
typedef long long int intz;
intz m,n,mid;
map<intz,intz> dp[40][40];
intz vv[40][40]={0};

void DFS1(int i,int startx,int starty,intz val)
{
if(i>mid || startx>m || starty>n)
	return;
intz u=vv[startx][starty];
dp[startx][starty][u^val]+=1;
DFS1(i+1,startx+1,starty,u^val);
DFS1(i+1,startx,starty+1,u^val);
}
intz ans=0;

void DFS2(int i,int startx,int starty,intz val)
{
if(i==m+n || startx<0 || starty<0)
{
if(startx>0 && starty>0)
{
ans+=dp[startx][starty][val];
}
return;
}
intz u=vv[startx][starty];
dp[startx][starty][u^val]+=1;
DFS2(i+1,startx-1,starty,u^val);
DFS2(i+1,startx,starty-1,u^val);
}

int main()
{
	intz k;
cin>>m>>n>>k;
mid=(m+n)/2;
for(int e=1;e<=m;e++)
	for(int v=1;v<=n;v++)
		cin>>vv[e][v];
DFS1(1,1,1,k);
DFS2(mid+1,m,n,0);
cout<<ans;


}



 