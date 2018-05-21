#include <bits/stdc++.h>
using namespace std;
int main()
{
long long int n,k,l;
cin>>n>>k>>l;
vector<long long int > arr;
arr.push_back(-1);
n=n*k;
for(long long int r=0;r<n;r++)
{
long long int a;
cin>>a;
arr.push_back(a);

}

sort(arr.begin(),arr.end());
vector<long long int > xx;
long long int g=0;
long long int cp=arr[1];
for(long long int e=1;e<=n;e++)
{
if(e%k!=1 && arr[e]-cp<=l)
xx.push_back(arr[e]);
}

 
long long int u=0,f=0;
//cout<<cp;
//cout<<n;
for(long long int e=1;e<=n;)
{
	//cout<<arr[e]<<endl;
if(arr[e]-cp>l)
	u++;
else{
	//cout<<arr[e]<<endl;
	f+=arr[e];
}
e=e+k;

}

if(u<=xx.size())
{
for(long long int e=1;e<=u;e++)
	f+=xx[xx.size()-e];
cout<<f;
}
else
cout<<"0";
}