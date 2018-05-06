#include <bits/stdc++.h>
using namespace std;
int main()
{
set<string > gg;
map<string,int > mp;
string s,n;
cin>>n>>s;
int maxx=-1;
string ans;
for(int r=0;r<s.length()-1;r++)
{
string f="";
f=f+s[r]+s[r+1];
 
mp[f]+=1;
if(mp[f]>maxx)
{
maxx=mp[f];
ans=f;

}

}

cout<<ans;


}