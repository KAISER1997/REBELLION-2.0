#include <bits/stdc++.h>
using namespace std;
int main()
{
vector<double> arr;
double n;
long long int ans=0;
cin>>n;
double sum=0;
for(int e=0;e<n;e++)
{
double g;
cin>>g;
arr.push_back(g);
sum=sum+g;
}
double ev=4.5*n;
//cout<<sum;
sort(arr.begin(),arr.end());
if(sum<ev)
for(int q=0;q<arr.size();q++)
{
sum+=5-arr[q];
++ans;
if(sum>=ev)
	break;


}
cout<<ans;


}