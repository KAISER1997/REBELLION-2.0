#include <bits/stdc++.h>
using namespace std;
int main()
{

long long int cases;
cin>>cases;
for(long long int e=1;e<=cases;e++)
{
long long int n,k,l;
cin>>n>>k;
l=k;
long long int s=0;
while(l!=0)
{
l=l/2;
++s;
}
long long int q=-1;
vector<long long int > arr;
if(s<=n)
{
for(long long int e=0;e<s;e++)
{
long long int u=pow(2,s-e-1);
if(u==2)
q=arr.size();
arr.push_back(u);

}
for(long long  int e=1;e<=n-s;e++)
	arr.push_back(1);
//cout<< s<<arr[q];
if((n-s)%2==1 && q!=-1 && arr[q]+1<=k)
	arr[q]=arr[q]+1;


}
else
{
	long long int sf=k+1;
for(long long int e=1;e<n;e++)
{
	  sf=pow(2,s-e);
arr.push_back(sf);
}
arr.push_back(sf-1);

}

for(long long int e=0;e<arr.size();e++)
	cout<<arr[e]<<" ";
cout<<endl;

}
}