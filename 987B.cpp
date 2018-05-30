#include <bits/stdc++.h>
using namespace std;
int main()
{
	double x,y;
	cin>>x>>y;
double a=y*log(x);
double b=x*log(y);

if(abs(a-b)<=0.0000000000001)
	cout<<"=";
else if(a<b)
	cout<<"<";
else
	cout<<">";



}