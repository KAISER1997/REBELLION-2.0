#include <bits/stdc++.h>
using namespace std;
map<long long int ,long long int >mp;
long long int n;
long long int countt(long long int n)
{
long long int e=0;
while(n%3==0)
{

++e;
n=n/3;

}

return(e);

}

long long int countt2(long long int n)
{
long long int e=0;
while(n%2==0)
{

++e;
n=n/2;

}

return(e);

}
long long int war[9999]={0};
vector<long long int > ans;
void recurse(long long int start,long long int i)
{
 if(i==n && mp[start]==1)
 {
 	war[i]=start;
for(long long int e=1;e<=n;e++)
	ans.push_back(war[e]);

 }
 else
 {
if(mp[start]==1 && start%3==0)
	{    war[i]=start;
	recurse(start/3,i+1);
}
if(mp[start]==1)
{war[i]=start;
	recurse(start*2,i+1);
	
	
	}
}
	}



int main()
{
 
vector<long long int > arr;
cin>>n;
 
long long int maxx=0,start;
long long int mint=11111111;
for(long long int r=1;r<=n;r++)
{
long long int e ;
cin>>e;
mp[e]=1;
arr.push_back(e);
 long long int eva=countt(e);
 long long int eva2=countt2(e);
if(eva>=maxx && eva2<=mint)
{
	maxx=eva;
	mint=eva2;
	start=e;
}
 

}
long long int l=1;
 

recurse(start,1);
for(long long int q=0;q<ans.size();q++)
cout<<ans[q]<<" ";
}