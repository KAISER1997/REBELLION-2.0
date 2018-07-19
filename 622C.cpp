#include <bits/stdc++.h>
using namespace std;
int INF=999999999;
struct ob
{
int p;
int n;
};
int val[2000000]={0};
  ob seg1[2000000],seg2[2000000];



void build(int i,int st,int sp)
{
int mid=(st+sp)/2;
if(st==sp)
{
seg1[i].n=val[st];
seg2[i].n=val[st];
seg1[i].p=seg2[i].p=st ;
return;
}
build(2*i,st,mid);
build(2*i+1,mid+1,sp);
 if(seg1[2*i].n<=seg1[2*i+1].n)
 {
seg1[i]=seg1[2*i];
 }
 else
 {
 	seg1[i]=seg1[2*i+1];
 }

if(seg2[2*i].n>=seg2[2*i+1].n)
 {
seg2[i]=seg2[2*i];
 }
 else
 {
 	seg2[i]=seg2[2*i+1];
 }



}
ob query1(int i,int st,int sp,int qst,int qsp)
{
	int mid=(st+sp)/2;
	ob oppo;
	oppo.n=INF;
	oppo.p=0;
if(st>qsp || qst>sp)
	return(oppo);
if(qst<=st && qsp>=sp)
	return (seg1[i]);
ob a1=query1(2*i,st,mid,qst,qsp);
ob a2=query1(2*i+1,mid+1,sp,qst,qsp);
if(a1.n<a2.n)
return(a1);
else
return(a2);
}
ob query2(int i,int st,int sp,int qst,int qsp)
{  int mid=(st+sp)/2;
	ob oppo;
	oppo.n=-1;
	oppo.p=0;
if(st>qsp || qst>sp)
	return(oppo);
if(qst<=st && qsp>=sp)
	return (seg2[i]);
 ob a1=query2(2*i,st,mid,qst,qsp);
ob a2=query2(2*i+1,mid+1,sp,qst,qsp);
if(a1.n>a2.n)
return(a1);
else
return(a2);
}
int main()
{

	ios_base::sync_with_stdio(false);
cin.tie(NULL);
int nt,q;
cin>>nt>>q;
for(int e=1;e<=nt;e++)
	cin>>val[e];

build(1,1,nt);
for(int e=1;e<=q;e++)
{
int l,r,v;
cin>>l>>r>>v;
ob a1=query1(1,1,nt,l,r);
ob a2=query2(1,1,nt,l,r);
if(a1.n!=v)
	cout<<a1.p<<endl;
else if(a2.n!=v)
	cout<<a2.p<<endl;
else
	cout<<"-1"<<endl;



}



}