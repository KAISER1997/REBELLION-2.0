#include <bits/stdc++.h>
using namespace std;

vector<pair<int,int > >pp;
int k;
int check(int l)
{


int q=0;
int ans;
	for(int r=0;r<pp.size();r++)
{
int st,sp;
st=pp[r].first;
sp=pp[r].second;
if(st<=l && l<=sp)
	return(st);

}
int b=-1;
for(int r=max(l-k+1,0);r<=l;r++)
{
	int q=0;
for(int m=0;m<pp.size();m++)
{
int st,sp;
st=pp[m].first;
sp=pp[m].second;
if(st<=r && r<=sp)
{   q=1;
	if(st+k-1>=l)
	 {  
       pp[m].second=l;
       return(st);

	 }
}

}
 if(q==0)
 {
pp.push_back(make_pair(r,l));
return(r);

 }

}

 

}




int main()
{
int n,h;
cin>>n>>k;
int start=0;
vector<int > war;
for(int e=0;e<n;e++)
{
cin>>h;
war.push_back(h);
 
}
 
 
 for(int e=0;e<n;e++)
 {
 
 cout<<check(war[e])<<" ";





 }
}