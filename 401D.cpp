#include <bits/stdc++.h>
using namespace std;
long long int sz,bs;
vector<long long int > arr,dig;
 map<long long int,map<long long int,long long int > > mp;
 int lv;
 long long int ctBits(long long int n)
{
long long int g=0;
for(long long int e=0;e<=lv;e++)
if(n&(1<<e))
	++g;
return(g);
}


long long int fact(long long int t)
{
	long long int p=1;
for(long long int e=1;e<=t;e++)
	p=p*e;

return(p);
}



int main()
{
long long int n;
cin>>n>>bs;
lv=18;
 for(int e=0;e<=18;e++)
{
long long int r=pow(10,e);
arr.push_back(r%bs);
}

long long int m=n;
//long long int arr[11]={0};
while(n!=0)
{
long long int a=n%10;
 
dig.push_back(a);
n=n/10;
}

sz=dig.size();
 
long long int gh=pow(2,sz)-1;
long long int dp[262144][100]={0};
dp[0][0]=1;
for(int p=0;p<=gh;p++)
{ //cout<<"s";
	long long int mask=p;
	long long int ep=ctBits(mask);
	//cout<<mask<<endl;
for(long long int sj=0;sj<bs;sj++)
{ //cout<<sz;
for(long long int e=0;e<sz;e++)
{ 
	if(e==sz-1 && dig[ep]==0)
	continue;
	//cout<<"DS";
	//cout<<mask<<" "<<e<<" "<<endl;
if((mask&(1<<e))==0)
{  
	long long int q=(sj+dig[ep]*arr[e])%bs;
 
dp[mask|(1<<e)][q]+=dp[mask][sj];
//cout<<dp[mask|1<<e][q]<<endl;
}


}


}

}



long long int po=dp[gh][0];

//cout<<po;

//long long int m=n;
long long int art[11]={0};
while(m!=0)
{
long long int a=m%10;
art[a]+=1;
 
m=m/10;
}

for(long long int e=0;e<=9;e++)
{
if(art[e]>1)
	po=po/fact(art[e]);

}
cout<<po;
}