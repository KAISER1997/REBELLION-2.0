#include <bits/stdc++.h>
using namespace std;
typedef long long int intz;
vector<intz> p;
map<intz,intz> ct;
intz lk=0;
intz pj=0;
intz fact(intz n)
{
	if(n==0)
		return(1);
	intz q=1;
for(intz w=1;w<=n;w++)
	q=q*w;

return(q);
}
intz ans=0;
intz god=19;
void rec(intz st ,intz emp,intz q)
{
if(st==p.size())
{
intz le=fact(god)/fact(q);
ans+=emp/le;
return;


}

if(p[st]==0 && pj==1)
	rec(st+1,emp/fact(ct[p[st]]),ct[p[st]]);
else
for(int e=1;e<=ct[p[st]];e++)
{
rec(st+1,emp/fact(e),q+e);
}




}





int main()
{
intz n;
cin>>n;

 
while(n!=0)
{
 
if(ct[n%10]==0)
	p.push_back(n%10);



ct[n%10]+=1;

n=n/10;
}
sort(p.begin(),p.end());
rec(0,fact(19),0);
intz total=ans;
//cout<<ans<<endl;
ans=0;
pj=1;
if(ct[0]!=0)
while(1!=0)
{
if(ct[0]!=1)
{
	ans=0;
ct[0]-=1;
rec(0,fact(19),0);
total-=ans;
//cout<<ans<<endl;
}
else
{
ans=0;
rec(1,fact(19),0);
total-=ans;
//cout<<ans<<endl;
break;
}


}
 cout<<total;
}