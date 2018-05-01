#include <bits/stdc++.h>
using namespace std;
int main()
{
long long int h[25]={0},maxx=0;
for(int e=1;e<=14;e++)
cin>>h[e];
for(int f=1;f<=14;f++)
{
	long long int war[28]={0},tp=0;
if(h[f]!=0)
{
int l=(f+h[f])%14;
if(l==0)
l=14;
int q=0;
//cout<<endl;

for(int e=f+1;;e++)
{   if(e==15)
	e=1;
	//cout<<e; 
	if(e!=f && q==0)
war[e]=h[e]+((h[f]/14)+1);
 
	else if(e!=f && q==1)
war[e]=h[e]+((h[f]/14));
 
 if( e==f)
{
	war[e]=((h[f]/14));
	if(war[e]%2==0)
	tp=tp+war[e];
	break;
}
if(war[e]%2==0)
tp=tp+war[e];

 
if(e==l)
	{
    q=1;

	}
	if(e==14)
e=0;
}
maxx=max(maxx,tp);
// for(int l=1;l<=14;l++)
// 	cout<<war[l]<<" ";
//cout<<endl;



}



}
cout<<maxx;


}