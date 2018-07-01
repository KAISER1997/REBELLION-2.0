#include <bits/stdc++.h>
using namespace std;
int main()
{
vector<int > arr,a2;
int ev=0,odd=0;
int n,dd;
cin>>n>>dd;
for(int q=0;q<n;q++)
{
int e;
cin>>e;
arr.push_back(e);
}
for(int q=0;q<arr.size()-1;q++)
{
if(arr[q]%2==0)
	++ev;
else
	++odd;
if(ev==odd)
{
a2.push_back(abs(arr[q]-arr[q+1]));
}


}
int sum=0,ans=0;
sort(a2.begin(),a2.end());
for(int w=0;w<a2.size();w++)
{
if(sum+a2[w]<=dd)
{
sum=sum+a2[w];
++ans;
}
else
break;

}
cout<<ans;

}