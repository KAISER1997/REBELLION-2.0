#include <bits/stdc++.h>
using namespace std;
typedef long long int intz;
intz bin(intz n)
{
intz s=0;
while(n!=0)
{
++s;
n=n/2;
}
return(s);
}





int main()
{

	ios_base::sync_with_stdio(false);
cin.tie(NULL);
intz n,qq,q;
cin>>n>>qq;
intz dp[64]={0},arr[64]={0},powz[64]={0};
for(intz e=1;e<=n;e++)
{
intz z;
cin>>z;
//cout<<bin(z)<<endl;
arr[bin(z)-1]+=1;
}
intz v;
intz lve=1;
for(int e=0;e<=33;e++)
{
powz[e]=lve;
lve=lve*2;

}
for(intz le=1;le<=qq;le++)
{
cin>>v;
intz ck=0,ans=0;

for(intz e=0;e<=32;e++)
	dp[e]=arr[e];


for(intz e=32;e>=0;e--)
{
	intz q=powz[e];
if(v&(1<<e))
{     //cout<<e;
	for(intz qv=e;qv>=0;qv--)
	{  if(q==0)
		break;
		intz l=powz[qv];
		if(q<=dp[qv]*l)
		{
           //cout<<"SDS";
			 
			intz t=q/l;
			ans+=t;
			dp[qv]-=t;
			q=0;
		}
		else
		{
       ans+=dp[qv];
      q=q-dp[qv]*l;
      dp[qv]=0;

		}
}
if(q!=0){

	ck=-1;
	break;
}
}
 if(ck==-1)
 	break;
}
if(ck==0)
cout<<ans<<endl;
else
cout<<"-1"<<endl;

}



}




 