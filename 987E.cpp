#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int mp[1000002],pos[1000002];

for(int e=1;e<=n;e++)
{
	cin>>mp[e];
	pos[mp[e]]=e;
}
int u=0;
for(int e=1;e<=n;e++)
{
int p=pos[e];
if(p!=e)
{
pos[e]=e;
pos[mp[e]]=p;
int q=mp[e];
mp[e]=e;
mp[p]=q;
++u;
}


}

int a=3*n-u;
int b=7*n+1-u;
if(a%2==0)
cout<<"Petr";
else
cout<<"Um_nik";
}