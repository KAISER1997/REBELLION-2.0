#include <bits/stdc++.h>
using namespace std;
typedef long long int intz;
int main()
{

intz m,n;
cin>>m>>n;
intz row[9999]={0};
intz col[9999]={0};
long long int ans[101][101]={0};
intz t1=0,t2=0;
for(intz e=1;e<=m;e++){
cin>>row[e];
t1=t1^row[e];
}
for(intz e=1;e<=n;e++)
{
cin>>col[e];
t2=t2^col[e];
}

if(t1==t2)
{
	intz t=0;
for(intz e=2;e<=n;e++)
{

t=t^col[e];
ans[1][e]=col[e];

}

t=t^row[1];
ans[1][1]=t;
for(intz e=2;e<=m;e++)
	ans[e][1]=row[e];
cout<<"YES"<<endl;
for(intz t=1;t<=m;t++)
	{for(intz f=1;f<=n;f++)
		cout<<ans[t][f]<<" ";
		cout<<endl;
	}


}
else
cout<<"NO";



}