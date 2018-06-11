#include <bits/stdc++.h>
using namespace std;
typedef long long int intz;
int main()
{

intz pve[1000005]={0},nve[1000005]={0},zer=0;
intz n;
cin>>n;
for(intz e=1;e<=n;e++)
{
string  g;
cin>>g;
intz neg=0,posi=0;
for(intz e=0;e<g.length();e++)
{
if(g[e]==')' && posi==0)
	++neg;
if(g[e]==')' && posi!=0)
	--posi;
if(g[e]=='(')
	++posi;
}
if(posi==0 && neg==0)
	++zer;
if(posi!=0 && neg==0)
	pve[posi]+=1;
if(posi==0 && neg!=0)
	nve[neg]+=1;

}
intz ans=zer*(zer);
for(intz e=1;e<=300005;e++)
	ans+=pve[e]*nve[e];


cout<<ans;
}