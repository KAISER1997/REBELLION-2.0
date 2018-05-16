#include <bits/stdc++.h>
using namespace std;
int main()
{

long long int a,b;
cin>>a>>b;
long long int tr=0;
long long int arr[70]={0};
long long int sum=0;
for(long long int e=61;e>=0;e--)
{
long long int l=1;
l=l<<e;
long long int up,down;
up=l&b;
  down=l&a;
if(tr==0)
{
if(up==down)
	arr[e]=0;
else
{
tr=1;
arr[e]=1;
}
}
else
{
if(up!=down)
	arr[e]=1;
else
{
arr[e]=1;
}


}
long long int lv=pow(2,e);
sum=sum+lv*arr[e];


}


cout<<sum;





}