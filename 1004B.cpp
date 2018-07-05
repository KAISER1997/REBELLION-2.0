#include <bits/stdc++.h>
using namespace std;
int main()
{
int n,m;
cin>>n>>m;
vector<pair<int,int> > vv;
int arr[n+1]={0};
for(int e=1;e<=m;e++)
{
int a,b;
cin>>a>>b;
vv.push_back(make_pair(a,b-a+1));
}
sort(vv.begin(),vv.end());

for(int e=0;e<vv.size();e++)
{
int sz=vv[e].second,st=vv[e].first;
int rose=0,silv=0;
for(int q=st;q<=st+sz-1;q++)
{
	if(arr[q]==2)
		++rose;
	else if(arr[q]==3)
		++silv;
}
int ef=st;
 while(ef<=st+sz-1)
 { if(arr[ef]!=0)
 	{ ++ef;
 	continue;
 }
if(rose+1<=sz/2)
	{arr[ef]=2;
		++rose;
 }
 
 { arr[ef]=3;
  ++silv;

 }
++ef;
}
}

for(int e=1;e<=n;e++)
{
if(e%2==0)
	cout<<"0";
else
	cout<<"1";

}



}