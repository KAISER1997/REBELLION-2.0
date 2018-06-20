#include <bits/stdc++.h>
using namespace std;
typedef long long int intz;
int main()
{

	ios_base::sync_with_stdio(false);
cin.tie(NULL);

intz n,tot=0,k;
cin>>n>>k;
vector<intz> arr;
vector<intz> pos;
arr.push_back(-1);
for(intz q=1;q<=n;q++)
{
intz ef;
cin>>ef;

	arr.push_back(ef);
	if(q==1 || q==n)
		pos.push_back(q);
	else
	{

    if(ef!=1)
    	pos.push_back(q);

	}
}
for(intz e=1;e<=n;e++)
{
intz z=arr[e];
intz p=arr[e],sum=arr[e];
if(k==1)
++tot;
intz ct=0;
intz tf=e;

for(int ex=1;ex<=60;ex++)
{
	if(tf==n)
		break;
intz pz=*(upper_bound(pos.begin(),pos.end(),tf));//>e
intz l=pz-tf-1;
if(l!=0)
{
if(p%k==0)
{

if(p/k - sum>0 && p/k -sum<=l)
{
++tot;
}

}
sum+=l;
tf=pz;
if(p>=1000000000000)
break;
p=p*arr[pz];
sum=sum+arr[pz];
if(p%sum==0 && p/sum==k)
++tot;
}
else
{

sum=sum+arr[pz];
if(p>=1000000000000)
break;
p=p*arr[pz];
 
//cout<<p<<endl;
++ct;
if(p%sum==0 && p/sum==k)
++tot;

if(ct==50)
	break;

tf=pz;
}


}






}
cout<<tot;


}