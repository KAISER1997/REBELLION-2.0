#include <bits/stdc++.h>
using namespace std;
long long int gcd(long long int u,long long  int v)
{
    return u%v==0?v:gcd(v,u%v);
}
long long int lcm(long long int a,long long  int b) { return a * (b / gcd(a, b)); }

int main()
{
long long int n,a,b,p,q;
cin>>n>>a>>b>>p>>q;
long long int lc=lcm(a,b);
long long int a1=n/a,a2=n/b;
long long int a12=n/lc;
a1-=a12; a2-=a12;
long long int s1=a1*p+a12*p+a2*q;
long long int s2=a1*p+a12*q+a2*q;
cout<<max(s1,s2);

}