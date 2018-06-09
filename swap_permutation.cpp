#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int > ii;
map<int,int > mp;
int main()
{
	vector<ii> vv;
int n,m,k,pos;
cin>>n>>m>>k;
mp[1]=1;
mp[k]=k;
int jv=0;
for(int i=1;i<=m;i++ )
{
	int a,b,p1,p2;
	cin>>a>>b;
	if(mp[a]==0)
		mp[a]=a;
	if(mp[b]==0)
		mp[b]=b;
vv.push_back(ii(mp[a],mp[b]));

	p1=mp[a];
	mp[a]=mp[b];
	mp[b]=p1;
	if(mp[a]==1) pos=a;
	if(mp[b]==1) pos=b;
	if(mp[a]!=1 && mp[b]!=1 && jv==0)
		jv=i;
}
//cout<<mp[k]<<endl;
if(mp[k]!=1)
for(int e=0;e<vv.size();e++)
{
if(vv[e].first==mp[k] && vv[e].second==1)
	{
		cout<<e+1;
		break;
}
if(vv[e].first==1 && vv[e].second==mp[k])
	{
		cout<<e+1;
		break;
}




}
else
cout<<jv;
}