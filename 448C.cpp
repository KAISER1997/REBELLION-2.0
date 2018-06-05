#include <bits/stdc++.h>
using namespace std;
vector<int > arr;
int fk(int l,int r){int gg=1000000008;
 for(int e=l;e<=r;e++)
 gg=min(gg,arr[e]); 
return(gg);}
int recur(int l,int r)
{
if(l==r)
	return(1);
int mint=fk(l,r);
int start=l,stop;
int t=0;
int j=1; //we have a start
for(int e=l;e<=r;e++)
{
	arr[e]=arr[e]-mint;
 if((arr[e]==0 && j==0)){

t+=recur(start,e-1);
j=1;
}
else if(arr[e]!=0 && j==1)
{
start=e;
j=0;


}
if(e==r && arr[e]!=0)
t+=recur(start,e);

}

return(min(mint+t,r-l+1));
}
int main()
{

int n;
cin>>n;
arr.push_back(0);
for(int e=1;e<=n;e++)
{
	int g;
	cin>>g;
	arr.push_back(g);
}

cout<<recur(1,n);

}