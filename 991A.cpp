#include <bits/stdc++.h>
using namespace std;
int main()
{
int a,b,c,n;
cin>>a>>b>>c>>n;

int j=a+b-c;

if(j>=0 && j<=n && n-j>0 && a>=c && b>=c)
	cout<<n-j;
else
	cout<<"-1";






}