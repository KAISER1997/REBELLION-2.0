#include <bits/stdc++.h>
using namespace std;
int main()
{
map<int,set<int> > arr;
int n;
cin>>n;
set<int> ans;
for(int e=1;e<=n;e++)
{
	int p;
	cin>>p;
if(e==1){
	ans.insert(p);
	arr[e].insert(p);
}
else
{


arr[e].insert(p);
ans.insert(p);
	for(set<int>::iterator it=arr[e-1].begin();it!=arr[e-1].end();it++)
	{
      arr[e].insert((*it)|p);
      ans.insert((*it)|p);

	}
}
}
cout<<ans.size();
}




