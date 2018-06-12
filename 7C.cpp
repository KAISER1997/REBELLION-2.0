#include <bits/stdc++.h>
using namespace std;
typedef long long int intz;
intz gcd(intz u, intz v){  return u%v==0?v:gcd(v,u%v);}
intz lcm(intz a, intz b) { return a * (b / gcd(a, b)); }
intz x,y;
void extendedEuclid(intz a, intz b) {
if (b == 0) { x = 1; y = 0;  return; }
extendedEuclid(b, a % b);
intz x1 = y;
intz y1 = x - (a / b) * y;
x = x1;
y = y1;
}
int main()
{
intz a,b,c,l;
cin>>a>>b>>c;
if(b!=0)
 l=gcd(a,b);
else
l=gcd(b,a);
//cout<<l;
if(c%l==0)
{
extendedEuclid(a,b);
x=x*(c/l);
y=y*(c/l);
cout<<-1*x<<" "<<-1*y;


}
else
cout<<"-1";



}