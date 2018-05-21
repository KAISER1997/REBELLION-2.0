#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int m=n,s=0;
vector<int > arr;
while(m!=0)
{
arr.push_back(m%10);
m=m/10;

}
int ln=arr.size();
if(ln%2==1)
++ln;
 
long long int np=10000000000;
 
//cout<<arr.size();
for(int e=0;e<=pow(2,ln)-1;e++)
{
long long int gh=0,fr=0,sev=0;

for(int ev=0;ev<ln;ev++)

{
long long int f=e&(1<<ev);
if(f!=0)
f=1;
 long long int l1=(7*f*(pow(10,ev))) ;
 long long int l2=(4*(1-f)*pow(10,ev));
//cout<<l1<<" "<<l2<<endl;
gh+=l1+l2;
fr+=1-f;
sev+=f;
}

if(fr==sev && gh>=n)
	np=min(np,gh);



}
if(np==10000000000)
	{ln+=2;
for(int e=0;e<=pow(2,ln)-1;e++)
{
long long int gh=0,fr=0,sev=0;

for(int ev=0;ev<ln;ev++)

{
long long int f=e&(1<<ev);
if(f!=0)
f=1;
 long long int l1=(7*f*(pow(10,ev))) ;
 long long int l2=(4*(1-f)*pow(10,ev));
//cout<<l1<<" "<<l2<<endl;
gh+=l1+l2;
fr+=1-f;
sev+=f;
}

if(fr==sev && gh>=n)
	np=min(np,gh);



}
}
cout<<np;
}