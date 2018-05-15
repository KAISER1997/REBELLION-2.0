#include <bits/stdc++.h>
using namespace std;
string st[1000];
int m,n;
int check(int i,int j,int ct)
{
	int g=0;
if(i>=1 && j>=1)
	{if(st[i-1][j-1]=='*')
		++g;
	}
if(i>=1)
	{if(st[i-1][j]=='*')
		++g;
	}
if(j>=1)
{
if(st[i][j-1]=='*')
		++g;
}
if(j>=1 && i<(m-1))
{if(st[i+1][j-1]=='*')
		++g;
	}
if(i<(m-1))
{
	if(st[i+1][j]=='*')
		++g;
}
if(j<(n-1))
{

	if(st[i][j+1]=='*')
		++g;
}
if(i>=1 && j<(n-1))
{

	if(st[i-1][j+1]=='*')
		++g;
}

if(i<(m-1) && j<(n-1))
{
	if(st[i+1][j+1]=='*')
		++g;
}
if(ct==g)
return(1);
else
return(0);



}




int main()
{

cin>>m>>n;
for(int e=0;e<m;e++)
cin>>st[e];
int ans=0;
for(int f=0;f<m;f++)
{
for(int e=0;e<n;e++)
{
if(!(st[f][e]=='.' || st[f][e]=='*'))
{
int ft=check(f,e,(int)st[f][e]-48);
if(ft==0)
{
//cout<<f<<"xx"<<e<<endl;

ans=-1;
}
}
else if(st[f][e]=='.')
	{
int ft=check(f,e,0);
if(ft==0)
{
//cout<<f<<" "<<e<<endl;

ans=-1;
}
}


}


}
if(ans==0)
	cout<<"YES";
else
	cout<<"NO";



}