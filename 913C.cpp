#include <bits/stdc++.h>
using namespace std;
typedef long long int intz;
vector<intz> arr;
intz ctBits(intz n)
{
intz s=0;
while(n!=0)
{
++s;
n=n/2;
}
return(s);
}
int main()
{
intz n,total;
cin>>n>>total;
intz prev=99999000000000;
for(intz e=0;e<n;e++)
{
intz u;
cin>>u;
arr.push_back(min(u,2*prev));
prev=arr[arr.size()-1];
}
for(intz e=arr.size();e<=max(ctBits(total)+2,n);e++)
  {
    arr.push_back(prev*2); prev=prev*2;
  }
intz s=0;
//cout<<ctBits(total)<<endl;
for(intz e=0;e<=ctBits(total);e++)
if(total&(1<<e))
  s+=arr[e];
//cout<<s;
  prev=arr.size()-1;
intz f=0;
for(intz e=ctBits(total);e>=0;e--)
{
if(total&(1<<e))
{
for(intz m=e+1;m<prev;m++)
{
  //cout<<arr[m]<<" "<<m<<endl;
s=min(f+arr[m],s);
}
prev=e;
f+=arr[e];
}
}

cout<<s;


}