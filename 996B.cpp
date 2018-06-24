#include <bits/stdc++.h>
using namespace std;
typedef long long int intz;
int main()
{

vector<intz> arr;
intz n,ans=0;
cin>>n;
arr.push_back(-1);
intz mintz=1000800009;
for(intz e=1;e<=n;e++)
{
intz u;
cin>>u;
arr.push_back(u);
mintz=min(mintz,u);
}
intz pos=mintz%n;
for(intz e=1;e<=n;e++)
	arr[e]=arr[e]-mintz;
pos=1+pos;
intz ct=0;
while(1!=0)
{
	if(pos==n+1)
		pos=1;
if(arr[pos]-ct<=0)
{
ans=pos;
break;
}
else
{
++ct;
++pos;

}



}
cout<<ans;
}



