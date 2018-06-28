#include <bits/stdc++.h>
using namespace std;
typedef long long int intz;
int main()
{
intz n,sp;
cin>>n>>sp;
intz prev=0;
intz gv;
intz sum1=0,mx=0,sum2=0;// sum1-light
intz ax1[100005]={0},ax2[100005]={0};
vector<pair<intz,intz > >ee;
vector<intz > lc;
for(intz e=1;e<=n+1;e++)
{
intz g;
if(e<=n)
cin>>g;
else
g=sp;
gv=g-prev;
 if(e%2==1)
 	sum1+=gv;
 else
 	sum2+=gv;
ax1[e-1]=sum1;
ax2[e-1]=sum2;
ee.push_back(make_pair(prev,g));
lc.push_back(e%2);
prev=g;
}
mx=ax1[n];
for(int e=0;e<ee.size();e++)
{
intz a=ee[e].first;intz b=ee[e].second;
//cout<<a<<" "<<b<<endl;
if(b-a==1)
continue;
if(lc[e]==1)
{ //cout<<a<<" "<<b<<endl;
mx=max(mx,ax1[e]-1+ax2[n]-ax2[e]);
//cout<<mx<<endl;
}
else
{
mx=max(mx,ax1[e]+b-a-1+ax2[n]-ax2[e]);

}


 }
cout<<mx;
}