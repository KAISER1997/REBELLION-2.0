 #include <bits/stdc++.h>
using namespace std;
typedef long long int intz;
struct obj
{
intz x,y;
};



int main()
{ obj ob;
intz m,n,r,k;
cin>>m>>n>>r>>k;
map<intz,map<intz,intz> > mp;
priority_queue<pair<intz,pair<intz,intz> > > pp;
intz qx=(m+1)/2;
intz qy=(n+1)/2;
intz yt=min(n-qy,r-1);
intz yd=min(qy-1,r-1);
intz xt=min(m-qx,r-1);
intz xd=min(qx-1,r-1);
intz yM=max(yt,yd),ym=min(yt,yd);
intz xM=max(xt,xd),xm=min(xt,xd);
intz v1,v2;
if(yM==r-1)
v1=ym+1;
else
	v1=1+ym-(r-yM-1);
if(xM==r-1)
v2=xm+1;
else
	v2=1+xm-(r-xM-1);



intz v=(v1)*(v2);
 
mp[qx][qy]=1;
pp.push(make_pair(v,make_pair(qx,qy)));
intz q=0,sum=0;
while(!pp.empty())
{
pair<intz,pair<intz,intz> > l=pp.top();
pp.pop();
sum+=l.first;

++q;
 
intz a,b;
a=(l.second).first;
b=(l.second).second;
//cout<<a<<" "<<b<<" "<<l.first<<endl;
if(q==k)
	break;
for(intz e=1;e<=4;e++)
{
if(e==1) {qx=a+1;qy=b;}
if(e==2) {qx=a;qy=b+1;}
if(e==3) {qx=a-1;qy=b;}
if(e==4) {qx=a;qy=b-1;}
if(qx<=0 || qx>m)
continue;
if(qy<=0 || qy>n)
continue;
 if(mp[qx][qy])
 	continue;
 mp[qx][qy]=1;
 yt=min(n-qy,r-1);
 yd=min(qy-1,r-1);
 xt=min(m-qx,r-1);
 xd=min(qx-1,r-1);
  yM=max(yt,yd),ym=min(yt,yd);
  xM=max(xt,xd),xm=min(xt,xd);
  v1,v2;
if(yM==r-1)
v1=ym+1;
else
	v1=1+ym-(r-yM-1);
if(xM==r-1)
v2=xm+1;
else
	v2=1+xm-(r-xM-1);
 v=v1*v2;
ob.x=qx;
ob.y=qy;

 pp.push(make_pair(v,make_pair(qx,qy)));

}




}
  //cout<<sum<<endl;

    std::cout << std::setprecision(10);
 
long double ee=sum/(double)((n-r+1)*(m-r+1));
cout<<ee<<endl;













}