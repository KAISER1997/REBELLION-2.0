#include <bits/stdc++.h>
using namespace std;
int gcd(int u, int v)
{
    return u%v==0?v:gcd(v,u%v);
}
int main()
{
long long  int n,a,b;
cin>>n>>a>>b;
map<long long int ,long long int >  mp;
set<long long int > ww;
set<float> uu;
map<long long int,map<long long int,long long int > >  mp2;
set<pair<long long int,long long int > > bb;
for(long long int e=1;e<=n;e++)
{
long long int x,vx,vy,l1,l2;
cin>>x>>vx>>vy;
 
mp[a*vx-vy]+=1;
ww.insert(a*vx-vy);
 

mp2[vx][vy]+=1;
bb.insert(make_pair(vx,vy));
 
}

long long int sum=0,sum2=0;
for(set<long long int > :: iterator it=ww.begin();it!=ww.end();it++)
{

sum+=mp[*it]*(mp[*it]-1);
//cout<<*it<<" "<<mp[*it]<<endl;
}
 
for(set<pair<long long int,long long int> > :: iterator it=bb.begin();it!=bb.end();it++)
{

	sum2+=mp2[(*it).first][(*it).second]*(mp2[(*it).first][(*it).second]-1);
}
cout<< sum-sum2;

}