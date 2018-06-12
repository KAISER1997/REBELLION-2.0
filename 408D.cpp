#include <bits/stdc++.h>
using namespace std;
typedef long long int intz;
vector<intz >arr;
intz dp[10000]={0};
intz recur(intz n)
{
	if(dp[n]!=-1)
		return(dp[n]);
	intz p=arr[n],s;
if(n==0)
	return(0);
if(n!=arr[n])
 s=2+2*recur(n-1)-recur(p-1);
else
 s=recur(n-1)+2;
s+=1000000007;
s=s%1000000007;
return(dp[n]=s);


}
int main()
{

intz n;
arr.push_back(-1);
cin>>n;
for(intz e=1;e<=n;e++)
{
	dp[e]=-1;
intz u;
cin>>u;
arr.push_back(u);
}
cout<<recur(n);




}