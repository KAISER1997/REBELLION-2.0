

#include <bits/stdc++.h>
using namespace std;
typedef long long int intz;

intz seg[22][600000]={0},lazy[22][600000]={0},val[200000]={0};

void build(intz i,intz st,intz sp,intz bt)
{
	intz mid=(st+sp)/2;
if(st==sp)
{
	if(val[st]&(1<<(bt-1)))
seg[bt][i]=1 ;
return;
}
build(2*i,st,mid,bt);
build(2*i+1,mid+1,sp,bt);
seg[bt][i]=seg[bt][2*i]+seg[bt][2*i+1];
}


void update(intz i,intz st,intz sp,intz qst,intz qsp,intz bt)
{
 intz mid=(st+sp)/2;
if(lazy[bt][i])
seg[bt][i]=sp-st+1-seg[bt][i];
lazy[bt][2*i]=lazy[bt][i]^lazy[bt][2*i];
lazy[bt][2*i+1]=lazy[bt][i]^lazy[bt][2*i+1];
lazy[bt][i]=0;
if(st>qsp || qst>sp)
	return;


if(qst<=st && qsp>=sp)
{

seg[bt][i]=sp-st+1-seg[bt][i];
lazy[bt][2*i]=1^lazy[bt][2*i];
lazy[bt][2*i+1]=1^lazy[bt][2*i+1];
return;
}
update(2*i,st,mid,qst,qsp,bt);
update(2*i+1,mid+1,sp,qst,qsp,bt);
seg[bt][i]=seg[bt][2*i]+seg[bt][2*i+1];


}

intz query(intz i,intz st,intz sp,intz qst,intz qsp,intz bt)
{
	intz mid=(st+sp)/2;
	if(lazy[bt][i])
seg[bt][i]=sp-st+1-seg[bt][i];
lazy[bt][2*i]=lazy[bt][i]^lazy[bt][2*i];
lazy[bt][2*i+1]=lazy[bt][i]^lazy[bt][2*i+1];
lazy[bt][i]=0;
if(st>qsp || qst>sp)
	return 0;

if(qst<=st && qsp>=sp)
return(seg[bt][i]);
intz a=query(2*i,st,mid,qst,qsp,bt);
intz b=query(2*i+1,mid+1,sp,qst,qsp,bt);
return(a+b);
}
intz powz[30];
void pow2()
{
intz e=1;
for(intz q=0;q<=30;q++)
{
	powz[q]=e;
	e=e*2;
}


}






int main()
{
	ios_base::sync_with_stdio(false);
cin.tie(NULL);
pow2();
intz n;
cin>>n;
for(intz e=1;e<=n;e++)
	cin>>val[e];
for(int e=1;e<=20;e++)
build(1,1,n,e);
intz q;
cin>>q;
for(intz e=1;e<=q;e++)
{
intz ch,l,r,v,asn=0;
cin>>ch;
if(ch==1)
{
cin>>l>>r;
for(intz e=0;e<20;e++)
 asn+=powz[e]*query(1,1,n,l,r,e+1);
cout<<asn<<endl;
}
else
{
cin>>l>>r>>v;
for(intz e=1;e<=20;e++)
if(v&(1<<(e-1)))
update(1,1,n,l,r,e);

}




}



}




