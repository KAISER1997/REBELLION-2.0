#include <bits/stdc++.h>
using namespace std;
typedef long long int intz;
map<intz,intz > check,check2,val,dp;
vector<intz> arr[1000000];
intz ans=-100000000000000000;
intz INF=1000000006;
intz DFS1(intz start)
{
	intz s=0;
for(intz e=0;e<arr[start].size();e++)
{

if(check[arr[start][e]]==0)
{
	check[arr[start][e]]=1;
s+=DFS1(arr[start][e]);
}
 
 
}
//cout<<start<<" "<<s+val[start]<<endl;
return(dp[start]=s+val[start]);
}

intz DFS2(intz start)
{
intz mx1=-INF,mx2=-INF;

for(intz e=0;e<arr[start].size();e++)
{
if(check2[arr[start][e]]==0)
{
check2[arr[start][e]]=1;
intz s=DFS2(arr[start][e]);
if(mx1==-INF)
	mx1=s;
else
{
if(s>=mx1)
{
mx2=mx1;
mx1=s;
}
else
{
mx2=max(mx2,s);
}
}

}
}
if(mx2!=-INF && mx1!=-INF)
	ans=max(ans,mx2+mx1);




return(max(dp[start],mx1));
}


int main()
{
intz n;
cin>>n;
for(intz e=1;e<=n;e++)
	cin>>val[e];
check[1]=1;
check2[1]=1;
for(intz w=1;w<n;w++)
{
intz a,b;
cin>>a>>b;
arr[a].push_back(b);
arr[b].push_back(a);
}


DFS1(1);
DFS2(1);
if(ans!=-100000000000000000)
cout<<ans;
else
	cout<<"Impossible";
}


