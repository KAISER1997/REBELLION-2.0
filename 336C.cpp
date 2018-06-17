#include <bits/stdc++.h>
using namespace std;
typedef long long int intz;
vector<intz > arr[100055];
intz check(intz n,intz pos)
{
	
while(n!=0)
{
arr[pos].push_back(n%2);
n=n/2;
}
while(arr[pos].size()<=32)
	arr[pos].push_back(0);

}
int main()
{
intz maxx=0;
intz n;
cin>>n;
vector<intz > a;
a.push_back(-1);
for(intz e=1;e<=n;e++)
{
intz g;
cin>>g;
a.push_back(g);
check(g,e);
}

for(intz e=0;e<32;e++)
{
	intz q=0;
	intz st[33]={0};
	for(int q=0;q<33;q++)
		st[q]=1;
for(intz w=1;w<=n;w++)
{
if(arr[w][e]==1)
{	q=1;
	// if(e==2)
	// 	cout<<w<<endl;
for(intz t=0;t<e;t++)
{
	//  if(e==2)
	// 	cout<<w<<" "<<arr[w][t]<<"D"<<endl;
	st[t]=st[t]&arr[w][t];
 
}
}
}
if(q==1)
{ intz z=0;
for(intz l=0;l<e;l++){
	// if(e==2)
	// 	cout<<st[l]<<endl;
	if(st[l]!=0)
		z=1;
}
if(z==0)
{
maxx=e;
}

}
}

vector<intz > lp;
for(intz e=1;e<=n;e++)
{ 
	if(arr[e][maxx]==1)
		lp.push_back(a[e]);


}
//cout<<maxx<<endl;
cout<<lp.size()<<endl;
for(intz t=0;t<lp.size();t++)
	cout<<lp[t]<<" ";

}