#include <bits/stdc++.h>
using namespace std;
typedef long long int intz;
map<intz,intz> dp;
intz mod=1000000007;


intz powz(intz n)
{
	intz v;
	if(n==0)
		return(1);
	if(n==1)
		return(2);
	intz l=powz(n/2)%mod;
if(n%2==0)
	v=l*l;
else
	v=l*l*2;
return(v%mod);




}





intz recur(intz x)
{

if(x==1)
	return(1);
 if(dp[x]!=0)
   return(dp[x]);

intz l=0;
intz s=powz(x-1)%mod;
for(intz w=2;w<=sqrt(x);w++)
{
if(x%w==0)
{
intz q=x/w;
l+=recur(w);
if(q!=w)
l+=	recur(q);
l=l%mod;
}
}
s=s-l-1+mod;
s=s%mod;
//cout<<x<<" "<<s<<endl;
return(dp[x]=s);
}


int main()
{

intz a,b;
cin>>a>>b;
if(b%a)
	cout<<"0";
else
	cout<<recur(b/a);






}