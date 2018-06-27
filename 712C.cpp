#include <bits/stdc++.h>
using namespace std;
int main()
{
int a,b,ans=0;
cin>>a>>b;
int x1=b,x2=b,x3=b;
int ed=0;
while(1!=0)
{
	++ed;
int u=x1+x2+x3;
int xx1=min(x1,min(x2,x3));
int j=u-xx1;
int xx3=max(x1,max(x2,x3));
int xx2=j-xx3;
//cout<<xx1<<" "<<xx2<<" "<<xx3<<endl;
while(1!=0 )
{
	int u=xx1+1;
	if(u<=a && u+xx2>xx3 && u+xx3>xx2 && xx2+xx3>u) 
		{
			xx1=u;
		 
			 
		}
	else
		break;
	 

}
//cout<<xx1<<" "<<xx2<<" "<<xx3<<endl;
++ans;

x1=xx1;x2=xx2;x3=xx3;
if(x1==a && x2==a && x3==a)
break;
  
 
}
cout<<ans;
}