#include <bits/stdc++.h>
using namespace std;
typedef long long int intz;
intz mod=1000000007;
intz powz(intz n)
{

	if(n==0)
		return(1);
if(n==1)
	return(2);
intz j=powz(n/2);
if(n%2==0)
	return((intz)(j*j)%mod);
else
	return((intz)2*(j*j)%mod);
}

int main()
{

intz n,k,ansz;
cin>>n>>k;
k=k+1;
n=n;
if(n!=0)
 ansz=(mod+(powz(k)*(n%mod))%mod-(powz(k-1)-1)%mod)%mod;
else
ansz=0;
cout<<ansz;



}