#include <bits/stdc++.h>
using namespace std;
int main()
{

int a,b;
cin>>a>>b;
 map<int,int > mp;
int q1,q2,q3;
q1=a*2;
q2=b*3;
q3=min(q1,q2)/6;

for(int w=1;w<=a;w++)
	mp[w*2]=1;
for(int w=1;w<=b;w++)
	mp[w*3]=1;


for(int e=1;e<=q3;e++)
{
 if(mp[q1+2]==0 && mp[q2+3]==0)
 {
if(q1+2>q2+3)
{
q2=q2+3;
mp[q2]=1;
}
else
{
q1=q1+2;
mp[q1]=1;

}
 }
 else if(mp[q1+2]==1 && mp[q2+3]==0 )
 {


if(q1+4>q2+3)
{
q2=q2+3;
mp[q2]=1;
}
else
{
q1=q1+4;
mp[q1]=1;

}

 }
 else if(mp[q1+2]==0 && mp[q2+3]==1 )
 {


if(q1+2>q2+6)
{
q2=q2+6;
mp[q2]=1;
}
else
{
q1=q1+2;
mp[q1]=1;

}

 }
}
cout<<max(q1,q2);
}