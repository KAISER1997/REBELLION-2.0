#include <bits/stdc++.h>
using namespace std;
int main()
{
	int ans=0;
	vector<int > arr;
int n,g;
cin>>n>>g;
for(int e=1;e<=g;e++)
{
int l;
cin>>l;
arr.push_back(l);
}
int nf=n,ntw=2*n;
for(int e=0;e<arr.size();e++)
{
	int k=arr[e];
int s=arr[e]%4;
int g=arr[e]/4;
if(g>0 )
{
int tu=(k/4);
if(tu<=nf)
{
nf=nf-tu;
arr[e]-=tu*4;
}
else
{
arr[e]-=nf*4;
nf=0;
}
}
}

if(nf==0)
{
int s=0;
for(int d=0;d<arr.size();d++)
{
s+=ceil((double)arr[d]/2.0);
}
if(s>ntw)
	ans=-1;
else
	ans=1;

}

else
{
int tw=0,on=0;
for(int j=0;j<arr.size();j++)
{
if(arr[j]==3 && nf!=0)
{
arr[j]=0;
nf=nf-1;
}
if(arr[j]==2) ++tw;
else if(arr[j]==1)
	++on;
}
if(nf!=0)
{
if(nf<=min(on,tw))
{
 
on=on-nf;
tw=tw-nf;
nf=0;
//cout<<on<<" "<<tw<<endl;
if(on+tw<=ntw)
	ans=1;
else
	ans=-1;

}
else
{
nf=nf-min(on,tw);
int je=min(on,tw);
on=on-je;
tw=tw-je;
if(on==0)
{ //cout<<tw<<endl;
if(tw-nf-ntw<=nf/2)
	ans=1;
else
	ans=-1;
}
else if(tw==0)
{
if(nf*2+ntw>=on)
	ans=1;
else
	ans=-1;


}


}


}

else
{
int s=0;
for(int d=0;d<arr.size();d++)
{
s+=ceil((double)arr[d]/2.0);
}
if(s>ntw)
	ans=-1;
else
	ans=1;




}





}
if(ans==1)
	cout<<"YES";
else if(ans==-1)
	cout<<"NO";


}


