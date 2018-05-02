#include <bits/stdc++.h>
using namespace std;
int n;
string s[111];

void fill(int val[111][111],int e,int f,int sz)
{
	int a=0,b=0;
	int ct=0;
for(int u=f;u<n;u++)
{
++ct;
if(s[e][u]!='.')
	a=1;
if(ct==sz)
	break;
}
if(ct==sz && a==0)
{ 
 
for(int u=f;u<f+sz;u++)
{
val[e][u]+=1;
} }



ct=0;
for(int u=e;u<n;u++)
{
	 
++ct;
if(s[u][f]!='.')
	{b=1;
break;
}
if(ct==sz)
	break;
}
if(ct==sz && b==0)
{ 
for(int u=e;u<e+sz;u++)
{
val[u][f]+=1;
} }







}






int main()
{
int  sz;
cin>>n>>sz;
 int maxx=-1;
for(int d=0;d<n;d++)
{
cin>>s[d];
}
int val[111][111]={0};
for(int e=0;e<n;e++)
{
for(int f=0;f<n;f++)
{
	if(s[e][f]=='.')
fill(val,e,f,sz);
}
}
int a,b;
for(int e=0;e<n;e++)
for(int g=0;g<n;g++)
{ if(val[e][g]>maxx)
{
maxx=val[e][g];
a=e;
b=g;

}}


cout<<a+1<<" "<<b+1;

}