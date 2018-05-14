#include <bits/stdc++.h>
using namespace std;
vector<long long int > arr[1112111];
long long int prt[1111111],dp[1111111]={0};
long long int chek[1111111]={0};
long long int DFS(int start)
{

	long long int mp=0,sumz=0;
for(int e=0;e<arr[start].size();e++)
{
if(chek[arr[start][e]]==0)
{
chek[arr[start][e]]=1;
long long int q=DFS(arr[start][e]);
 prt[arr[start][e]]=start;
sumz=sumz+q;
 
}
}
 
	return(dp[start]=sumz+1);

}




 







int main()
{
long long int n;
cin>>n;
long long int a,b;
cin>>a>>b;
for(int e=1;e<=n-1;e++)
{
long long int av,bv;
cin>>av>>bv;
arr[av].push_back(bv);
arr[bv].push_back(av);
}
chek[a]=1;
int s=DFS(a);
// for(int e=1;e<=n;e++)
// cout<<dp[e]<<endl;
long long int start=b;
vector< long long int> aee;
long long int d=start;
while(start!=a)
{
aee.push_back(start);
d=start;
start=prt[start];
}

long long int bee=dp[b];
long long int q=dp[a]-dp[d];
long long int z=bee*q;
long long int ans=n*(n-1) ;
ans=ans-z;
cout<<ans;






}


