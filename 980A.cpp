#include <bits/stdc++.h>
using namespace std;
int main()
{
string s;
cin>>s;
int a=0,b=0;
for(int e=0;e<s.length();e++)
{
if(s[e]=='o')
	++a;
else
	++b;
}
if(a!=0 && b%a==0)
	cout<<"YES";
else if(a==0)
	cout<<"YES";
else
	cout<<"NO";
}





