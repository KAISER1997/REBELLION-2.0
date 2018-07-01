#include <bits/stdc++.h>
using namespace std;
typedef long long int intz;
int main()
{
intz n,a,b;
cin>>n>>a>>b;
string s;
cin>>s;
intz s1=0,s2=0,x=0;
if(s[0]=='0')
++s1;
for(intz e=1;e<s.length();e++)
{
if(s[e]!=s[e-1])
	++s2;
}
if(s2%2==0)
{
 if(s1==1)
 	x=(s2/2)+1;
 else
x=s2/2;

}
else
{
	x=(s2+1)/2;
}
intz z1;
if(x!=0)
  z1=(intz)(((intz)(x-1))*(intz)a+b);
else
	z1=0;
intz z2=x*b;
cout<<min(z1,z2);
}