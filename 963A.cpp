#include <bits/stdc++.h>
using namespace std;
long long int MOD=1000000009;
long long int x,y,d;


long long int gcd(long long int u,long long int v)
{
    return u%v==0?v:gcd(v,u%v);
}



void extendedEuclid(long long int a,long long  int b) {
if (b == 0) { x = 1; y = 0; d = a; return; }
extendedEuclid(b, a % b);
long long int x1 = y;
long long int y1 = x - (a / b) * y;
x = x1;
y = y1;
}
 

long long int inverse(long long int a,long long int p)
{
extendedEuclid(a,p);
long long int ans=(x+p)%p;
ans=(ans+p)%p;
return(ans);
}

int t=0;
long long int ApwNmodM(long long int a,long long int n)
{
	if(n==0)
		return(1);
if(n==1)
	return(a%MOD);
long long int s=ApwNmodM(a,n/2);
long long q=s*s ;
s=(q)%MOD;
if(n%2==1){
	long long int j=s*a;
	s= j%MOD;
}
 
return(s);
}

 


int main()
{

long long int n,a,b,k;
cin>>n>>a>>b>>k;
string sv;
cin>>sv;
long long int sum=0;
for(long long int e=0;e<sv.length();e++)
{
if(sv[e]=='+')
{
sum=sum+ApwNmodM(b,e)*ApwNmodM(a,n-e);
sum=sum%MOD;
}
else
{
long long int q=ApwNmodM(b,e)*ApwNmodM(a,n-e);
q=q%MOD;
sum=sum+MOD-q;
sum=sum%MOD;
}


}
//cout<<sum<<endl;
if(a!=b)
{
	 long long int kp;
	  kp=gcd(b,a);
	  a=a/kp;
	  b=b/kp;
	//cout<<a<<" "<<b;
long long int s=ApwNmodM(a,MOD-2);

//cout<<s<<endl;
s=(s*b)%MOD;

//cout<<s<<endl;
 long long int ans1;
long long int p= ApwNmodM(s,k);
if(p==1)
ans1=(n+1)/k;
 else
 {
long long int p2=ApwNmodM(p-1,MOD-2);
long long int p3=ApwNmodM(p,(n+1)/k)-1;
 ans1=(p3*p2)%MOD;
}
long long int ans=(ans1*sum)%MOD;
cout<<ans%MOD;

}

else
{
long long int ans=(((n+1)/k)*sum)%MOD;
cout<<ans;


}








}