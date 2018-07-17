#include <bits/stdc++.h>
using namespace std;
typedef long long int intz;
int main()
{
intz n;
cin>>n;
vector<intz > arr,arr1,arr2;
intz sum=0;
for(intz r=1;r<=n;r++)
{
intz g;
cin>>g;
arr.push_back(g);
sum+=g;
arr1.push_back(sum);
}
intz q=0;
for(int e=n-1;e>=0;e--)
{
q+=arr[e];
arr2.push_back(q);
}
intz mx=0;
for(int e=0;e<(n-1);e++)
{
intz qx=arr1[e];
//cout<<qx<<endl;
if(binary_search(arr2.begin(),arr2.begin()+n-e-1,qx))
mx=arr1[e];



}
cout<<mx;
}


