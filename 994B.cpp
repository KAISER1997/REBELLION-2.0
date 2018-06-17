#include <bits/stdc++.h>
using namespace std;
typedef pair<long long int,long long int> ii;
typedef long long int intz;



int main()
{
intz n,k,sum=0;
cin>>n>>k;
vector<ii> pw;
intz coin[n+10]={0};
intz ans[n+10]={0};
for(intz e=1;e<=n;e++)
{
intz po;
cin>>po;
pw.push_back(make_pair(po,e));
}
sort(pw.begin(),pw.end());
for(intz e=1;e<=n;e++)
	cin>>coin[e];
priority_queue <intz> pq;
for(intz e=0;e<pw.size();e++)
{ intz a,b; a=pw[e].first; b=pw[e].second;
if(e==0)
{
ans[b]=coin[b];
sum=coin[b];
pq.push(-1*coin[b]);
}
else
{
if(e<=k)
{
sum+=coin[b];
ans[b]=sum;
pq.push(-1*coin[b]);

}
else
{
intz r=pq.top();
pq.pop();
sum+=r+coin[b];
ans[b]=sum;
pq.push(-1*coin[b]);

}


}




}
for(intz z=1;z<=n;z++)
	cout<<ans[z]<<" ";



}