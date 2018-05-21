#include <bits/stdc++.h>
using namespace std;
int main()
{


string str[2005];
int m,n;
cin>>m>>n;
for(int e=0;e<m;e++)
cin>>str[e];
int store[2005]={0};
for(int e=0;e<m;e++)
{
for(int v=0;v<n;v++)
{
if(str[e][v]=='1')
	store[v]+=1;

}
}
int ans=0;
 
for(int e=0;e<m;e++)
{
	int s=0;
for(int v=0;v<n;v++)
{
if(str[e][v]=='1' && store[v]==1)
	s=1;
}
if(s==0)
ans=1;

}


if(ans==1)
	cout<<"YES";
else
	cout<<"NO";
}

 