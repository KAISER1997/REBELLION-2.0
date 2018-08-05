#include <bits/stdc++.h>
using namespace std;
int main()
{
int a,b,c;
cin>>a>>b>>c;
string s;
string t;
cin>>s>>t;
vector<int> wd;
int arr[1111111]={0};
for(int e=0;e<s.length();e++)
{
	string q="";
for(int w=e;w<s.length();w++)
{
q=q+s[w];
//cout<<q<<endl;
if(q==t)
{
wd.push_back(e+1);
arr[e+1]=wd.size();
}
else 
{
	 
arr[e+1]=wd.size();

}
}
}
 
for(int e=1;e<=c;e++)
{
int a,b;
cin>>a>>b;
b=b-t.length()+1 ;


 if(a>b ||b<=0)
 	cout<<"0"<<endl;
 else
{
 cout<<arr[b]-arr[a-1]<<endl;

 
}
}





}