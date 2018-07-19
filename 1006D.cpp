#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
cin>>n;
string s1,s2;
cin>>s1>>s2;
 
int ans=0;
for(int i=0;i<(s1.length()/2);i++)
{
char a1=s1[i],a2=s1[n-i-1];
char b1=s2[i],b2=s2[n-i-1];
//cout<<a1<<" "<<b1<<endl;
 set<char> s;
 s.insert(a1);s.insert(a2); s.insert(b1);s.insert(b2);
 if(s.size()==4)
 	ans+=2;
 if(s.size()==3)
 {  
if(a1==a2)
	ans+=2;
else
	ans+=1;

 }
 if(s.size()==2)
 { 
 	int q=ans;
if(a1==a2 && a1!=b1 && a1!=b2)
	ans+=0;
else if(a1!=a2 && b1!=b2)
	ans+=0;
else 
	ans+=1;
 

 }

}
if(n%2!=0)
	if(s1[n/2]!=s2[n/2])
		++ans;
cout<<ans;

}