#include <bits/stdc++.h>
using namespace std;
typedef long long int intz;
intz dist[1840][1840]={0};
intz inf=1000000000000008;
vector<intz> arr[1810];
 intz dp[1810]={0};
intz DFS(intz start)
{
	if(arr[start].size()==0)
		return(0);
	if(dp[start]!=-1)
		return(dp[start]);
intz j=inf;
for(intz g=0;g<arr[start].size();g++)
{
j=min(dist[start][arr[start][g]]+DFS(arr[start][g]),j);
}

return(dp[start]=j);


}








int main()
{
string s;
while(cin>>s)
{

intz n,hole;
cin>>n>>hole;
for(intz q=0;q<=n*hole;q++){
	arr[q].clear();
	dp[q]=-1;
	for(intz z=0;z<=n*hole;z++)
		dist[q][z]=inf;
}
 
 intz bt;
for(intz w=1;w<=hole*(n-1);w++)
{  if(w<=hole)
	{
	arr[0].push_back(w);
	dist[0][w]=0;
}
	if(w%hole==1)
bt=w+hole;
else if(hole==1)
bt=w+1;
for(intz q=0;q<hole;q++)
{
	intz e;
cin>>e;
arr[w].push_back(bt+q);
//cout<<w<<" "<<bt+q<<endl;
dist[w][bt+q]=2+e;
}
}
DFS(0);
cout<<s<<endl;
cout<<dp[0]<<endl;


}





}