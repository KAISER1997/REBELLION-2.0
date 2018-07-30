#include <bits/stdc++.h>
using namespace std;
typedef long long int intz;
intz MOD=1000000007;
intz prime[20]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,57,59,61,67};
intz mask(intz n)
{
intz f=0;
for(intz u=0;u<=19;u++)
{
	//cout<<prime[u]<<endl;
if(n%prime[u]==0)
	{   intz z=0;
		while(n%prime[u]==0)
		{
           ++z;
           n=n/prime[u];

		}
if(z%2==1)
f=f|(1<<u);


}





}
return(f);
}


  int dp[3][1048577]={0};
//long long int powz[100002]={0};
// int  powz(int n)
// {
//  if(n==0)
//  	return(1);
//  if(n==1)
//  	return(2);
//  intz q=powz(n/2);
//  intz fq=1LL *((long long)q*q)%MOD;
//  if(n%2==1)
//  	fq=1LL *((long long)fq*2)%MOD;
//  return(fq);



// }

intz powz[100002];
void pw()
{
int u=1;
for(int e=0;e<=100000;e++)
{
	powz[e]=u;
	u=u*2;
	u=u%MOD;
}



}





int main()
{ pw();
 ios_base::sync_with_stdio(false);
cin.tie(NULL);
intz n;
cin>>n;
intz arr[200]={0};

for(intz e=0;e<n;e++)
{
intz h;
cin>>h;
 
++arr[h];
}
dp[0][0]=powz[arr[1]];
//cout<<dp[0][0]<<endl;
for(int e=2;e<=70;e++)
{
	long long int t=mask(e);
	//cout<<t<<endl;
for(int ex=0;ex<(1<<20);ex++)
{


	if(arr[e]>0)
	{
dp[1][ex^t]+=1LL *((long long)(dp[0][ex])*((long long )powz[arr[e]-1]))%MOD;
dp[1][ex]+=1LL *((long long)(dp[0][ex])*((long long )powz[arr[e]-1]))%MOD;
dp[1][ex^t]=1LL *dp[1][ex^t]%MOD;
dp[1][ex]=1LL *dp[1][ex]%MOD;
}
else
dp[1][ex]=1LL *dp[0][ex];
 
}
for(int ex=0;ex<(1<<20);ex++)
{ dp[0][ex]=dp[1][ex];
	dp[1][ex]=0;


}

}



cout<<(dp[0][0]-1)%MOD;

}