#include <bits/stdc++.h>
using namespace std;
map<int,map<int,int> > mp;
int n,d,k;
int MOD=1000000007;
int  DFS(int check,int sum)
{
	if(mp[check][sum]!=0)
		return
	mp[check][sum];
if(sum==n && check==2)
	return(1);
else if(sum>=n)
	return(-1);
int s=0;
for(int e=1;e<=k;e++)
{ 
if(e>=d || check==2)
{  
	 int q=DFS(2,sum+e);
	 if(q>0) s=(s+q)%MOD;
}
else
{	int q=DFS(1,sum+e);
    if(q>0) s=(s+q)%MOD;

}
}
if(s==0)
return(mp[check][sum]=-1);
return(mp[check][sum]=s%MOD);

}

int main()
{

 
cin>>n>>k>>d;
int z=DFS(1,0) ;
if(z==-1)
	cout<<"0";
else cout<<z%MOD;








}