#include <bits/stdc++.h>
using namespace std;
int main()
{
long long int b,l,k;
cin>>b>>l>>k;

long long int x=-1,y=-1;

if(b-1>=k)
{
x=(b/(k+1))*l;
}
if(l-1>=k)
{
y=(l/(k+1))*b;
 
}
if(k>b-1 && k>l-1  && k<=(b+l-2))
{
x=(l/(k-b+2));
y=(b/(k-l+2));

}
//cout<<x<< "  "<<y;
cout<<max(x,y);




}