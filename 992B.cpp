#include <bits/stdc++.h>
using namespace std;
typedef long long int intz;
intz gcd(intz u, intz v)
{
    return u%v==0?v:gcd(v,u%v);
}


int main()
{
intz l,r,x,y,ast,asp,ans=0;
cin>>l>>r>>x>>y;
intz start=l,stop=r;
intz p=x*y;

intz fk=sqrt(y);
vector<int> ww;
 
for(intz g=1;g<=sqrt(y);g++)
{
	
	//cout<<g<<endl;

if(y%g==0)
{
intz g2=y/g;
if(g2!=g)
{
ww.push_back(g);
ww.push_back(g2);
}
else
ww.push_back(g);
}
}
for(intz q=0;q<ww.size();q++)
{

intz re=p/ww[q];
if(gcd(re,ww[q])==x && re<=r && re>=l && ww[q]>=l && ww[q]<=r)
{++ans;
}

}
cout<<ans;
}