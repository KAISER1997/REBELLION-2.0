#include <bits/stdc++.h>
using namespace std;
int main()

{
int arr[200]={0},n,k;
cin>>n>>k;
string s;
cin>>s;
for(int e=0;e<s.length();e++)
{
arr[s[e]]+=1;
}

for(int e=1;e<=k;e++)
{
for(int g=97;g<=122;g++)
{
if(arr[g]!=0)
{

arr[g]-=1;
break;
}
}
}
string tt="";
for(int t=s.length()-1;t>=0;t--)
{
if(arr[s[t]]!=0)
{
arr[s[t]]-=1;
tt+=s[t];
}


}
reverse(tt.begin(),tt.end());
cout<<tt;






}