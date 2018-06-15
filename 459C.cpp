#include <bits/stdc++.h>
using namespace std;
map<int,map<int,int> >arr;
int main()
{

int k,d,n;
cin>>n>>k>>d;
if(k>n)
{

for(int e=0;e<n;e++)
{
int g=e;
int t=1;
while(g!=0)
{
arr[t][e+1]=g%k;
g=g/k;
}
}

for(int e=1;e<=d;e++)
{
for(int g=1;g<=n;g++)
	cout<<arr[e][g]+1<<" ";
cout<<endl;

}



}
else if(n<=pow(k,d))
{
for(int e=0;e<n;e++)
{
int g=e;
int t=1;
while(g!=0)
{
arr[t][e+1]=g%k;
g=g/k;
++t;
}
}

for(int e=1;e<=d;e++)
{
for(int g=1;g<=n;g++)
	cout<<arr[e][g]+1<<" ";
cout<<endl;

}






}
else
	cout<<"-1";


}
	








