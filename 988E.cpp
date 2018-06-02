#include <bits/stdc++.h>
using namespace std;
typedef long long int intz;
int main()
{
intz n,kv;
cin>>n;
vector<intz> x[22];
intz e=1;
vector<intz >vv;
while(n!=0)
{
intz u=n%10;
vv.push_back(u);
x[u].push_back(e);
++e;
n=n/10;
}
intz minn=111111;
int pv=0;
if(vv.size()>1 && vv[vv.size()-2]==0)
{
for(int e=vv.size()-3;e>=0;e--)
	if(vv[e]!=0)
	{  ++pv;
		// if(x[vv[e]].size()==1 )
		// 	x[vv[e]][(intz)0]=(intz)99;
		break;
	}
	else
		++pv;


}




if(x[0].size()>=2)
	minn=min(minn,x[0][0]-1+x[0][1]-2);
if(x[2].size()>0 && x[5].size()>0 )
{
if((x[5][0]==(e-1) && vv[vv.size()-2]==0))
	kv=pv;
else 
	kv=0;
      if(x[5][0]<x[2][0])
	minn=min(minn,x[5][0]-1+x[2][0]-2+kv);
    else
    	minn=min(minn,(x[5][0]-x[2][0]+(x[2][0]-1)*2)+kv);


}
if(x[7].size()>0 && x[5].size()>0 )
{
if((x[5][0]==(e-1) && vv[vv.size()-2]==0))
	kv=pv;
else 
	kv=0;

      if(x[5][0]<x[7][0])
	minn=min(minn,x[5][0]-1+x[7][0]-2+kv);
    else
    	minn=min(minn,x[5][0]-x[7][0]+(x[7][0]-1)*2+kv);


}

if(x[5].size()>0 && x[0].size()>0 )
{
 //cout<<minn;
      if(x[0][0]<x[5][0])
	minn=min(minn,x[0][0]-1+x[5][0]-2);
    else
    	minn=min(minn,x[0][0]-x[5][0]+(x[5][0]-1)*2);


}
 


if(minn!=111111)
cout<<minn;
else
cout<<"-1";






}