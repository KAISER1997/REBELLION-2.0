#include <bits/stdc++.h>
using namespace std;
int main()
{
int n,m;
cin>>n>>m;
int q=m;
for(int e=1;e<=n;e++)
{
int t=0;
int x;
cin>>x;
if(x<=q)
{
q=q-x;
if(q==0)
{  ++t;
	q=m;
}

}
else
{
++t;
x=x-q;
t+=x/m;
q=(m-(x%m));



}

cout<<t<<" ";

}






}