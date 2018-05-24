#include <bits/stdc++.h>
using namespace std;
  long long int MOD=1000000007;
vector<long long int > arr[1111111];
long long int check[1111111]={0};
long long int pos[1111111]={0};
long long int lz=0;
void DFS(int start,int q,int lv)
{
pos[start]=lv;
for(int e=0;e<arr[start].size();e++)
{
if(check[arr[start][e]]==q)
{
lz=pos[start]-pos[arr[start][e]]+1;
}
else if(check[arr[start][e]]==0)
{
check[arr[start][e]]=q;
DFS(arr[start][e],q,lv+1);
}
}
}

long long int powz(int a,int n)
{
	long long int p=1;
for(int e=1;e<=n;e++)
	p=(p*a)%MOD;
return(p%MOD);

}
int main()
{
int n;
cin>>n;
for(int e=1;e<=n;e++)
{
	int b;
	cin>>b;
arr[e].push_back(b);
}
vector<long long int >store;
long long int tp=0;
for(int e=1;e<=n;e++)
{
if(check[e]==0)
{
lz=0;
check[e]=e;
DFS(e,e,0);
if(lz!=0)
store.push_back(lz);
//cout<<lz;
tp+=lz;
//cout<<e<<" "<<lz<<endl;
}
}

long long int left=n-tp;
left=powz(2,left);
left=max(left,(long long)1);
for(int e=0;e<store.size();e++)
{
	left=left%MOD;
left=(long long)(left*(powz(2,store[e])-2))%MOD;

}

cout<<left;
}