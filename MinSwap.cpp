//Minimum number of swaps required to sort an array of distinct elements

#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> ii;
int main()
{

	int n,sum=0;
	cin>>n;
	vector<ii> arr;
	arr.push_back(ii(-1,-1));
for(int e=1;e<=n;e++){
int u;
cin>>u;
arr.push_back(ii(u,e));
}
sort(arr.begin(),arr.end());
int vis[n+1]={0};
for(int e=1;e<=n;e++)
{
	int t=arr[e].first;
	int j=e; 
if(arr[e].second==e || vis[t]==1)
	continue;
else
{
	int u=0;
while(vis[arr[j].first]!=1)
{
vis[arr[j].first]=1;
j=arr[j].second;
++u;
//cout<<u<<endl;
}

sum+=u-1;

}
}
cout<<sum;
}



 