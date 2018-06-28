#include <bits/stdc++.h>
using namespace std;
int y=0;
vector<int > arr[100009];
map<int,int> check;
void CYcle(int start)
{
if(check[start]==1)
	return;
check[start]=1;
++y;
for(int e=0;e<arr[start].size();e++)
	CYcle(arr[start][e]);

}
int main()
{
int n;
cin>>n;
for(int q=1;q<=n;q++)
{
	int g;
	cin>>g;
arr[q].push_back(g);
}
vector<long long int> ss;
for(int q=1;q<=n;q++)
{
y=0;
if(check[q]==0)
CYcle(q);
ss.push_back(y);
//cout<<y<<endl;
}
if(ss.size()!=1)
{
sort(ss.begin(),ss.end(),greater<int>());
long long int ans=(ss[0]+ss[1])*(ss[0]+ss[1]);
for(int q=2;q<ss.size();q++)
ans+=(long long int)ss[q]*ss[q];
cout<<ans;
}
else
cout<<"1";





}