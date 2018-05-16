 #include <bits/stdc++.h>
using namespace std;
long long int gcd(long long int u, long long int v)
{
    return u%v==0?v:gcd(v,u%v);
}
int main()
{
	ios_base::sync_with_stdio(false);
cin.tie(NULL);
	long long int css;
	cin>>css;
	for(long long int e=1;e<=css;e++)
	{
long long int a,b,base;
cin>>a>>b>>base;
long long int rt=gcd(a,b);
a=a/rt;
b=b/rt ;
//cout<<a<<" "<<b<<endl;
long long int l=a/b;
a=a-l*b;
 
	while(gcd(b,base)!=1)
	{
     long long int l=gcd(b,base);
     b=b/l;
     base=l;
	}



if(b==1)
	cout<<"Finite"<<endl;
else
	cout<<"Infinite"<<endl;




}
}
