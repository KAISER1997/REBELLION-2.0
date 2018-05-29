#include <bits/stdc++.h>
using namespace std;
int arr[1111111]={0};
int k;
int chk(int x,int l,int r)
{
if(x==1)
	return(0);
int s=0;
 
if(arr[x]>=l && arr[x]<=r)
	{
		s=1;
	}

if(s==1)
	return(0);
else
	return(1);

}



int fz(int a,int l,int r)
{
	vector<int> ff;
	int s=0;
for(int e=1;e<=sqrt(a);e++)
{

if(a%e==0)
{
	ff.push_back(a/e);
	s+=chk(a/e,l,r);

if(e!=(a/e)){
	ff.push_back(e);
	s+=chk(e,l,r);
}
}
}
if(k==l)
return(ff.size());

return(s);
}






int main()
{

ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
int a,b;
cin>>n;
for(int r=1;r<=n;r++)
{
int a,b;
cin>>a>>b;
k=r;
int lz=fz(a,r-b,r-1);
for(int e=1;e<=sqrt(a);e++)
{
if(a%e==0)
{	arr[e]=r;

arr[a/e]=r;
}
}
cout<<lz<<'\n';

}

}