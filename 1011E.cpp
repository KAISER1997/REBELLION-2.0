#include <bits/stdc++.h>
using namespace std;

int gcd(int u, int v)
{
	if(u==0 && v==0)
		return(0);
	if(v==0)
		return(u);

    return u%v==0?v:gcd(v,u%v);
}
int main()
{
	ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,base;
cin>>n;
cin>>base;
vector<int > arr(1000000);
 
long long int gg;
for(int e=0;e<n;e++)
{
long long int j;
cin>>j;

if(e==0)
gg=j%base;
else
gg=gcd(gg,j%base);
}
 
 vector <long long int > tt;
 for(long long int t=0;t<base;t++)
 {
long long int bb=t*gg;
if(arr[bb%base]==0)
{
arr[bb%base]=1;
tt.push_back(bb%base);

}


 }
 cout<<tt.size()<<endl;
 sort(tt.begin(),tt.end());
 for(int e=0;e<tt.size();e++)
 	cout<<tt[e]<<" ";

 





 





}