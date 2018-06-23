#include <bits/stdc++.h>
using namespace std;
int main()
{

string s1,s2;
cin>>s1>>s2;
int t=0;
for(int e=0;e<s1.length()-1;e++)
{
if(s1[e]=='0' && s1[e+1]=='0' && s2[e]=='0')
{
s1[e]='X';
s2[e]='X';
s1[e+1]='X';
++t;
}
else if(s1[e]=='0' && s1[e+1]=='0' && s2[e+1]=='0')
{
	++t;
s1[e]='X';
s2[e+1]='X';
s1[e+1]='X';
}
else if(s1[e+1]=='0' && s2[e]=='0' && s2[e+1]=='0')
{ ++t;
s1[e+1]='X';
s2[e]='X';
s2[e+1]='X';

}
else if(s1[e]=='0' && s2[e]=='0' && s2[e+1]=='0')
{ ++t;
s1[e]='X';
s2[e]='X';
s2[e+1]='X';
}
}



cout<<t;



}


