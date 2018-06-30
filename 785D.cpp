#include <bits/stdc++.h>
using namespace std;
typedef long long int intz;
long long int mod=1000000007;
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
	ios_base::sync_with_stdio(false);
cin.tie(NULL);
factx(200000);
intz ans=0;
	//ncrModp(2000,2000,mod);

//cout<<store(7,3)<<endl;
int arr1[1000000]={0};
int arr2[1000000]={0};
string s;
cin>>s;
int t=0;
for(int e=0;e<s.length();e++)
{
 if(s[e]=='('){
if(e!=0)
{
 	arr1[e]=arr1[e-1]+1;
   arr2[e]=arr2[e-1];
}
else
arr1[e]=1;

 }
 else{
 	++t;
 	if(e!=0)
 	{
arr1[e]=arr1[e-1];
 	arr2[e]=arr2[e-1]+1;
 }
 else
 	arr2[e]=1;
}
}

for(int e=0;e<s.length();e++)
{
if(s[e]==')')
{
	intz q1=arr1[e];
intz q2=t-arr2[e-1]-1;
 ans+=store(q1+q2+1,q1)-store(q1+q2,q1);
 ans=(ans+mod)%mod;
 

}
}
cout<<ans;
}