#include <bits/stdc++.h>
using namespace std;
int main()
{
int n,buil,q=0;
cin>>n>>buil;
int uv=buil;
int f=(n-2-1)/2;
int y=(n+1)/2;
int arr[111][111]={0};
if(buil%2==0)
{  
	int u=0;
	if(buil!=0)
for(int e=2;e<=n-1;e++)
{
for(int m=2;m<=3;m++)
{
arr[m][e]=1;
u+=1;
}
if(u==buil)
{
q=1;
break;

}
}
}
else
{

	if(buil!=0)
for(int e=2;e<=3;e++)
{
	if(buil%2!=0 && buil!=0)
	{ 
arr[e][(n+1)/2]=1;
 
--buil;
if(buil==0)
q=1;
}
for(int ev=1;ev<=f;ev++)
{
	if(buil==0)
{
q=1;
break;

}
arr[e][y-ev]=1;
arr[e][y+ev]=1;
--buil;
--buil;
if(buil==0)
{
q=1;
break;

}
 
}

if(q==1)
break;


}
}
 //cout<<buil;
if(q==0 && uv!=0)
cout<<"NO";
else
{

cout<<"YES"<<endl;
for(int r=1;r<=4;r++)
{
for(int f=1;f<=n;f++)
{
if(arr[r][f]==0)
	cout<<".";
else
	cout<<"#";


}

cout<<endl;
}



}






}







