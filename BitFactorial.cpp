#include <bits/stdc++.h>
using namespace std;
int main()
{

int n;
cin>>n;
int q=pow(2,n)-1,s=0;
//cout<<q;
map<int,int> dp;
dp[0]=1;
for(int e=0;e<q;e++)
{
int mask=e;
//cout<<mask<<endl;
for(int eg=0;eg<n;eg++)
{

if((mask&(1<<eg))==0)
{
dp[mask|(1<<eg)]+=dp[mask];
  
}
}
}
 cout<<dp[q]; //FACTORIAL





}