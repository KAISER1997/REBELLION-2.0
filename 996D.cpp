#include <bits/stdc++.h>
using namespace std;
vector<int> arr[2000];







int main()
{

int n,ans=0;
cin>>n;
int ct[n+2]={0};
 
vector<int> v;
v.push_back(-1);
for(int e=1;e<=2*n;e++)
{
int b;
cin>>b;
v.push_back(b);
}
for(int e=1;e<=2*n;e++)
{
if(ct[v[e]]==0)
{
ct[v[e]]=1;
int pj;
for(int q=e+1 ;q<=2*n;q++)
	if(v[q]==v[e])
		pj=q;
	//cout<<pj<<endl;
while(pj!=e+1)
{
	++ans;
int q=v[pj];
 v[pj]=v[pj-1];
v[pj-1]=q;
--pj;
}
}
}
cout<<ans;

}







