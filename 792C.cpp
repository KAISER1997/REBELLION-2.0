#include <bits/stdc++.h>
using namespace std;
int main()
{
string s,g;
cin>>s;
g=s;
int t=0,zer=0;;
for(int e=0;e<s.length();e++)
{
t+=(s[e]-48)%3;
if(s[e]=='0') ++zer;
}
if(t%3==0)
cout<<s;

else if(t!=0)
{ t=t%3;
int z=t;
int l=-1;
int t1=10000000,t2=10000000;
vector<int> v1,v2;
string s1,s2;
for(int e=s.length()-1;e>=0;e--)
{
if((s[e]-48)%3==z)
{   v1.push_back(e);
}
if((s[e]-48)%3==3-z)
 { v2.push_back(e);
 	//cout<<e<<endl;
 }
}
//cout<<v1.size()<<" "<<v2.size()<<endl;
 if(v1.size()>=1 || v2.size()>=2)
 {

if(v1.size()>=1)
{
t1=1;
if(v1[0]==0)
{
	s[0]='*';
for(int e=1;e<s.length();e++)
	if(s[e]=='0')
	{    ++t1;
     s[e]='*';
	}
	else
		break;
}
else s[v1[0]]='*';
}
if(v2.size()>=2)
{
t2=2;
g[v2[1]]='*';
 
	g[v2[0]]='*';

if(v2[1]==0)
{  
	 //cout<<"SDSDSDS";
for(int e=1;e<g.length();e++)
	if(g[e]=='0')
	{
     ++t2;
     g[e]='*';
	}
	else
		break;
}}
 //cout<<t1<<"DF"<<t2<<endl;
int lx=-1;
int ft=0;
if(t1<=t2)
{	for(int e=0;e<s.length();e++)
		if(s[e]!='*'){  
			if(s[e]=='0' && ft==0)
				continue;
			else ft=1;
             ++lx;
			cout<<s[e];
		}
	}
else
	{
     
		for(int e=0;e<g.length();e++)
		if(g[e]!='*')
			{ 
                 if(g[e]=='0' && ft==0)
				continue;
			else ft=1;
				++lx;
			cout<<g[e];
		}
	}
if(lx==-1 && zer==0)
	cout<<lx;
else if(lx==-1) cout<<"0";

}
else
cout<<"-1";




 }
}