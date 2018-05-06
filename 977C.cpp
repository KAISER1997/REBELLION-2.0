#include <bits/stdc++.h>
using namespace std;
int main()
{
int n,k;
cin>>n>>k;
vector<int > vv;
int ans;
for(int e=1;e<=n;e++)
{
int g;
cin>>g;
vv.push_back(g);
}
sort(vv.begin(),vv.end());
int f=vv[k-1];
int a=f;
int b=f+1;
if(k==vv.size())
ans=a;
else
{
if(a<vv[k])
	ans=a;
else
	ans=-1;

}
if(k!=0)
cout<<ans;
else
{
a=vv[0]-1;
if(a!=0)
cout<<a;
else
	cout<<"-1";

}


}