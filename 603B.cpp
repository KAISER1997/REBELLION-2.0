#include <bits/stdc++.h>
using namespace std;
long long int x,y,d;
void extendedEuclid(long long int a,long long int b) {
if (b == 0) { x = 1; y = 0; d = a; return; }
extendedEuclid(b, a % b);
long long int x1 = y;
long long int y1 = x - (a / b) * y;
x = x1;
y = y1;
}
long long int MOD=1000000007;

long long int inverse(long long int a,long long int p)
{
extendedEuclid(a,p);
long long int ans=(x+p)%p;
ans=(ans+p)%p;
return(ans);
}

vector<long long int > arr[1000100];

long long int check[1000101];
void DFS(long long int start)
{
if(check[start]==0)
{
check[start]=1;
for(  long long int e=0;e<arr[start].size();e++)
DFS(arr[start][e]);


}





}






int main()

{
long long int p,k;
cin>>p>>k;
long long int l=inverse(k,p);

for(int e=1;e<p;e++)
{
	if(k==0)
		break;
long long int h=(l*e)%p;
h=(h+p)%p;
  arr[e].push_back(h);
  arr[h].push_back(e);
}

long long int pz=1;
if(k==1)
pz=p;


for(long long int e=1;e<p;e++)
{
	//break;
if(check[e]==0)
{
DFS(e);
pz=(pz*p)%MOD;

}


}
cout<<pz;


}