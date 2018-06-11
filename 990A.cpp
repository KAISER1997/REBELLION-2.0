#include <bits/stdc++.h>
using namespace std;
int main()
{
double n,m,a,b;
cin>>n>>m>>a>>b;
double s=n/m;
long long int  s1=floor(s)*m;
long long int s2=ceil(s)*m;

long long int a1=(n-s1)*b;
long long int a2=(s2-n)*a;
cout<<(min(a1,a2));


}