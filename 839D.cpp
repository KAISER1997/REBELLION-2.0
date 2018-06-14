#include <bits/stdc++.h>
using namespace std;
typedef long long int intz;
intz MOD=1000000007;
int main()
{
intz n=0,ans=0;
intz dp[1000001]={0};
intz arr[1000001]={0};
intz powz[200002]={0};
intz v=2;
powz[0]=1;
for(intz e=1;e<=200000;e++)
{
powz[e]=v;
v=(v*2)%MOD;
//cout<<v<<endl;
}





cin>>n;
for(intz t=1;t<=n;t++)
{
intz u; cin>>u;
arr[u]+=1;
}

for(intz e=1000000;e>=2;e--)
{
	intz tb=0;
	intz l=0;
for(intz t=1;t<=1000000;t++)
{
intz jf=t*e;
if(jf>1000000)
break;
tb+=arr[jf];
if(arr[jf]!=0)
//cout<<e<<" "<<arr[jf]<<" "<<tb<<endl;
tb=tb%MOD;
if(t!=1){
l+=dp[jf];
l=l%MOD;
}
}
if(tb!=0){
	//cout<<e<<" "<<tb<<" "<<l<<endl;
intz u=(powz[tb-1]*tb)%MOD;
dp[e]=((u)-l+MOD)%MOD;
ans+=(e*dp[e])%MOD;
ans=ans%MOD;
}
}
cout<<ans;





}



