#include <bits/stdc++.h>
using namespace std;
int main()
{
vector<int> arr;
int n,k;
cin>>n>>k;
int cut[1000008]={0};
for(int e=0;e<n;e++)
{
int h;
cin>>h;
if(cut[h]==0)
arr.push_back(h);
cut[h]+=1;

}
sort(arr.begin(),arr.end());
int prev=100000000;
int ct=0;
for(int e=0;e<arr.size();e++)
{
if(arr[e]>prev && arr[e]<=(prev+k))
	{ct+=cut[prev];
//cout<<prev<<endl;
	}
prev=arr[e];
}
cout<<n-ct;


}