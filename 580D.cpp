#include <bits/stdc++.h>
using namespace std;
long long int s;
long long int lv;
long long int ctBits(long long int n)
{
long long int g=0;
for(long long int e=0;e<=lv;e++)
if(n&(1<<e))
	++g;
return(g);
}







int main()
{long long int ansz=-1;
long long int n,m,k;
cin>>n>>m>>k;
lv=n;
  s=pow(2,n)-1;
 //cout<<s;
  long long int lb=pow(2,m)-1;
vector<long long int> arr;
for(long long int e=0;e<n;e++)
{
	long long int j; cin>>j; arr.push_back(j);
}
long long int mp[20][20]={0};
long long int dp[1228228][20]={0};

 
for(long long int e=0;e<k;e++)
{
long long int a,b,c;
cin>>a>>b>>c;
mp[a-1][b-1]=c;


}
for(long long int e=0;e<n;e++)
{
long long int l=pow(2,e);
dp[l][e]=arr[e];
//cout<<l<<" "<<e<<" "<<arr[e]<<endl;
ansz=max(ansz,dp[l][e]);
}





for(long long int we=1;we<=s;we++)
{ //cout<<"SD";
	long long int mask=we;
	long long int u=ctBits(we);
	//cout<<u<<endl;
	if(u==m)
		continue;

for(long long int e=0;e<n;e++)
{
for(long long int ev=0;ev<n;ev++)
{
	if((mask&(1<<ev))!=0 || (mask&(1<<e))==0)
		continue;
dp[mask|(1<<ev)][ev]=max(arr[ev]+dp[mask][e]+mp[e][ev],dp[mask|(1<<ev)][ev]);
//cout<<u<<" "<<dp[mask|(1<<ev)][ev]<<endl;
if(u==m-1)
	ansz=max(ansz,dp[mask|(1<<ev)][ev]);

}


}


}
 
 
cout<<ansz;

}