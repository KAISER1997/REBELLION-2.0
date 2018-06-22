#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int dp[n+1][n+1]={0};


for(int ev=1;ev<=4;ev++)
{
int zTo1=0,oTz1=0,zTo0=0,oTz0=0;
for(int e=1;e<=n;e++)
{
string s;
cin>>s;
for(int w=0;w<n;w++)
{
	int z=w+1;
int q=s[w]-48;
if((e+z)%2==0 && q==0)//
	zTo1+=1;
if((e+z)%2==0 && q==1) //
	oTz0+=1;
if((e+z)%2==1 && q==0)
	zTo0+=1;
if((e+z)%2==1 && q==1)
	oTz1+=1;

}
}
dp[ev][0]=zTo0+oTz0;
dp[ev][1]=zTo1+oTz1;
}


int w=15;
int mx=1000000000;
for(int w=0;w<=15;w++)
{

int t=0,tp=0;
for(int q=0;q<=3;q++)
{
if(w&(1<<q))
{
++t;

tp+=dp[q+1][1];
}
else
{
	tp+=dp[q+1][0];
}
}
//cout<<t<<endl;
if(t==2)
{  
	mx=min(mx,tp);
}




}
cout<<mx;



}





