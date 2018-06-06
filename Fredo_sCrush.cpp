#include <bits/stdc++.h>
using namespace std;
typedef long long int intz;
intz val[21]={0};
map<intz,map<intz,intz > >adj;
intz gcd(intz u, intz v)
{
    return u%v==0?v:gcd(v,u%v);
}
intz lcm(intz a, intz b) { return a * (b / gcd(a, b)); }

intz cbit(intz n) //number of nonzero bits
{
intz s=0;
while(n!=0)
{
s+=n%2;
 
n=n/2;
}
return(s);
}
intz Hami_path(intz n)
{
	intz u=pow(2,n);
intz dp[u][n+1]={0};
 intz tv[n+1]={0};
intz store[u+1]={0};
intz qt=0;
for(intz e=1;e<u;e++)
{
	 intz mask=e;
if(cbit(e)==1)
{
	store[mask]=qt+1;
dp[mask][qt+1]=1;
 
val[qt+1]=qt+1;
tv[qt+1]=1;
++qt;
}
else
{
for(intz w=0;w<n;w++)
{
if(mask&(1<<w))
{
for(intz q=0;q<n;q++)
{
if(dp[mask^(1<<w)][q+1]!=0 && adj[q+1][w+1]!=0)
{
dp[mask][w+1]=1;
store[mask]=store[mask^(1<<w)]+w+1;
//cout<<w+1<<" "<<store[mask]<<endl;
if(cbit(mask)>tv[w+1])
{ tv[w+1]=cbit(mask);
	val[w+1]=store[mask];
}
else if(cbit(mask)==tv[w+1])
{
val[w+1]=max(val[w+1],store[mask]);

}


}
}
}
}
}
}
}

int main()
{

intz cases;
cin>>cases;
for(int fg=1;fg<=cases;fg++)
{
intz n,edges;
cin>>n>>edges;
for(intz e=0;e<=n+1;e++)
val[e]=0;
adj.clear();
for(int e=1;e<=edges;e++)
{
intz a,b;
cin>>a>>b;
adj[a][b]=1;
adj[b][a]=1;
}
Hami_path(n);


intz mint=99999999999;
intz maxx=-1;
for(intz e=1;e<=n;e++)
{maxx=max(maxx,val[e]);
	mint=min(mint,val[e]);
}
 intz e=lcm(maxx,mint);
 cout<<e/mint<<" "<<e/maxx<<endl;
}
 
 }