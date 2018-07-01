#include <bits/stdc++.h>
using namespace std;
typedef long long int intz;

long long int mod=998244353;
intz x,y;
void extendedEuclid(intz a, intz b) {
if (b == 0) { x = 1; y = 0;   return; }
extendedEuclid(b, a % b);
intz x1 = y;
intz y1 = x - (a / b) * y;
x = x1;
y = y1;
}
//general soln=>>>   x = x 0 + (b/d)n, y = y 0 − (a/d)n

//Modulo Inverse   > ax%p =1%p <
long long int inverse(long long int a,long long int p)
{
extendedEuclid(a,p);
long long int ans=(x+p)%p;
ans=(ans+p)%p;
return(ans);
}

 
intz fact[200002]={0};
void factx(intz sz)
{
intz p=1;
for(int e=1;e<=sz;e++)
{
p=p*e;
p=p%mod;
fact[e]=p;
}

}




intz store(intz a,intz b)
{   
	if(b==0)
	return(1);
	 if(a==b)
	 	return(1);
	//cout<<a<<" "<<fact[a]<<endl;
	b=fact[b]*fact[a-b];
	b=b%mod;
 a=fact[a]%mod;
intz q=inverse(b,mod);
q=q%mod;
q=(q*a)%mod;
return(q);


}
 













int main()
{
	factx(1002);
	map<intz,intz > dp;
intz n;
cin>>n;
vector<intz > arr;
for(intz e=0;e<n;e++)
{
intz q;
cin>>q;
arr.push_back(q);
}
intz tot=0;
intz ans=0;

for(int l=arr.size()-1;l>=0;l--)
{
	intz v=arr[l];
if(l+v>arr.size() || v<=0)
{	dp[l]=dp[l+1];
continue;
}
intz p=0;
for(intz q=l+v;q<arr.size();q++)
{p+=store(q-l-1,v-1)+((dp[q+1]*store(q-l-1,v-1))%mod);
p=p%998244353;
}
dp[l]=dp[l+1]+p;
dp[l]=dp[l]%mod;
ans+=p;
ans=ans%998244353;



}
cout<<ans;







}