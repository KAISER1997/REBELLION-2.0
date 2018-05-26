#include <bits/stdc++.h>
using namespace std;
int main()
{
	int gg=0;
	while(1!=0)
	{
++gg;
 
 
int n,q;
vector<int > arr;
cin>>n>>q;
if(n==0 && q==0)
break;
int m=10;
for(int e=0;e<n;e++)
{
	int b; cin>>b; arr.push_back(b);
}

printf("SET %d:\n",gg);
for(int et=1;et<=q;et++)
{

int t=0;
int m,d;
cin>>d>>m;

map<int,map<int ,int > > mp;
mp[0][0]=1;
for(int eq=0;eq<arr.size();eq++)
{
map<int,map<int ,int > > uu;
for(int e=0;e<m;e++)
{
for(int v=0;v<d;v++)
{
	int z =(v +arr[eq])%d;
	z=(z+d)%d;
uu[e+1][z]+=mp[e][v];
}
}
for(int e=1;e<=m;e++)
{
for(int v=0;v<d;v++)
{
mp[e][v]+=uu[e][v];
}
}
uu.clear();

}
 
 
printf("QUERY %d: %d\n",et,mp[m][0]);
}

}
}