#include <bits/stdc++.h>
using namespace std;
int main()
{
string s;
cin>>s;
int arr[11]={0},arr2[11]={0};
int c1[11]={0},c2[11]={0};//used to get 0
vector<int> x,y;
for(int e=0;e<s.length();e++)
{
	arr[s[e]-48]+=1;
	arr2[s[e]-48]+=1;
}
// for(int e=0;e<arr[0];e++)
// {
// 	arr[0]--;
// 	arr2[0]--;
// x.push_back(0);
// y.push_back(0);
// }
 
int mx=-1,a1=-1;
for(int ev=1;ev<=9;ev++)
{
if(arr[ev]!=0 && arr2[10-ev]!=0)
{
arr[ev]-=1;
arr2[10-ev]-=1;
int t=0;

for(int e=0;e<=9;e++)
{
c1[e]=min(arr[e],arr2[10-e-1]);
c2[e]=min(arr[e],arr2[10-e-1]);
t+=c1[e];
}

arr[ev]+=1;
arr2[10-ev]+=1;
if(t>mx)
{
mx=t;
a1=ev;
}
}

}

if(a1!=-1)
{
	//cout<<a1<<endl;
x.push_back(a1);
y.push_back(10-a1);
arr[a1]-=1;
arr2[10-a1]-=1;
for(int e=0;e<=9;e++)
{
int l=min(arr[e],arr2[10-e-1]);
arr[e]-=l;
arr2[10-e-1]-=l;

for(int ev=1;ev<=l;ev++)
{
x.push_back(e);
y.push_back(10-e-1);
}
}
}
int lv=min(arr[0],arr2[0]);
arr[0]-=lv; arr2[0]-=lv;
for(int u=0;u<=9;u++)
{
for(int e=1;e<=arr[u];e++)
	x.push_back(u);
for(int e=1;e<=arr2[u];e++)
	y.push_back(u);

}
for(int e=x.size()-1;e>=0;e--)
	cout<<x[e];
for(int z=1;z<=lv;z++)
	cout<<"0";


cout<<endl;
for(int e=y.size()-1;e>=0;e--)
	cout<<y[e];
for(int z=1;z<=lv;z++)
	cout<<"0";
}


