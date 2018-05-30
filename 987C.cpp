#include <bits/stdc++.h>
using namespace std;
typedef long long int intz;
typedef pair<intz,intz> ii;
int main()
{
	ios_base::sync_with_stdio(false);
cin.tie(NULL);

	intz mintz=4000000000000;
vector<ii> vv;
intz n;
cin>>n;
vv.push_back(ii(0,0));
intz arr[301][301];
memset(arr, -1, sizeof(arr));
for(int e=1;e<=n;e++)
{
intz j,cost=0;
cin>>j;
vv.push_back(ii(j,cost));
}
for(int e=1;e<=n;e++)
{
intz c;
cin>>c;
vv[e].second=c;

}

 arr[1][1]=vv[1].second;
for(intz e=2;e<=n;e++)
{ intz r=vv[e].first;
	arr[e][1]=vv[e].second;
for(intz u=1;u<e;u++)
{ intz lx=vv[u].first;
if(r>lx)
for(intz f=1;f<=2;f++)
{
if(arr[u][f]==-1)
	break;
else if(arr[e][f+1]==-1)
	arr[e][f+1]=arr[u][f]+arr[e][1];
else
	arr[e][f+1]=min(arr[u][f]+arr[e][1],arr[e][f+1]);
if(f==2)
mintz=min(mintz,arr[e][3]);
}
}

}
if(mintz!=4000000000000)
cout<<mintz;
else
cout<<"-1";
}






 