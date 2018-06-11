#include <bits/stdc++.h>
using namespace std;
int main()
{
int n,a,b;
cin>>n>>a>>b;
int ck=0;
int arr[1002][1002]={0};
if(a!=1 && b!=1)
ck=-1;
if(a!=1 && b==1 )
{
for(int r=1;r<a;r++)
{
arr[r][r]=0;
}
for(int e=a+1;e<=n;e++)
{
arr[a][e]=1;
arr[e][a]=1;
}
}
if(a==1 && b!=1 )
{
for(int e=1;e<=b-1;e++)
{
for(int ev=1;ev<=n;ev++)
if(ev!=e)
{
	
arr[e][ev]=1;
arr[ev][e]=1;
}
}
// for(int j=b+1;j<=n;j++)
// {
// arr[j][b]=1;
// arr[b][j]=1;
// }
}
if(a==1 && b==1 && n>1 && n<=3)
	ck=-1;
if(a==1 && b==1 && n>3)
{
int prev=1;
for(int e=2;e<=n;e++)
{
arr[e][prev]=1;
arr[prev][e]=1;
prev=e;
}
}
if(ck==-1)
	cout<<"NO";
else
{
cout<<"YES"<<endl;
for(int e=1;e<=n;e++)
{
for(int f=1;f<=n;f++)
{
cout<<arr[e][f];

}	
cout<<endl;
}


}



}






 