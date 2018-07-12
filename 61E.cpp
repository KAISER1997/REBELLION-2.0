#include <bits/stdc++.h>
using namespace std;
typedef long long int intz;
intz seg[8000008]={0};
void update(intz i,intz start,intz stop,intz x)
{
	intz mid=(start+stop)/2;
if(start==stop)
	seg[i]=1;
else
{
if(x<=mid)
	update(2*i,start,mid,x);
else
	update(2*i+1,mid+1,stop,x);
seg[i]=seg[2*i]+seg[2*i+1];



}



}

intz sum(intz i,intz start,intz stop,intz l,intz r)
{
	intz mid=(start+stop)/2;
if(l>stop || r<start || start> stop)
	return(0);
if(start>=l && stop<=r)
	return(seg[i]);

return(sum(2*i,start,mid,l,r)+sum(2*i+1,mid+1,stop,l,r));

}

int main()
{

	ios_base::sync_with_stdio(false);
cin.tie(NULL);
intz n;
cin>>n;
 intz ans=0;
vector<intz> v1,v2,z;
intz zf;
vector<pair<intz,intz> >ll;
int  cc[1000001]={0};
for(int e=1;e<=n;e++)
{
cin>>zf;
ll.push_back(make_pair(zf,e));

}
sort(ll.begin(),ll.end());
for(int e=1;e<=n;e++)
cc[ll[e-1].second]=e;





for(intz e=1;e<=n;e++)
{
intz a;
a=cc[e];
z.push_back(a);
update(1,1,1000000,a);
intz u=sum(1,1,1000000,a+1,1000000);
v1.push_back(u);
}
for(int e=1;e<=8000000;e++)
	seg[e]=0;
for(intz e=n-1;e>=0;e--)
{
intz jk=z[e];
update(1,1,1000000,jk);

intz u=sum(1,1,1000000,1,jk-1);
//cout<<u<<endl;
v2.push_back(u);

}
reverse(v2.begin(),v2.end());
for(intz e=0;e<n;e++)
{    
	ans+=v2[e]*v1[e];
}
cout<<ans;



 

}