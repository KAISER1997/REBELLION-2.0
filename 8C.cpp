#include <bits/stdc++.h>
using namespace std;
 typedef pair< int, int> ii;
int dp[1<<24]={0};
  int parent[1<<24]={0};

vector<ii> v;
int  startx,starty;
int  dist(  int  a1, int   b1)
{ ii a=v[a1];
	ii b=v[b1];
 return((a.first-b.first)*(a.first-b.first)+((a.second-b.second)*(a.second-b.second)));
}
 int d1(int  p)
{
return(2*dist(0,p));
}
 int d2(  int a,  int b)
{
return(dist(0,a)+dist(a,b)+dist(b,0));
}







int main()
{
cin>>startx>>starty;

  int n;
cin>>n;
v.push_back(ii(startx,starty));
for(  int e=1;e<=n;e++)
{
  int a,b;
cin>>a>>b;
v.push_back(ii(a,b));

}

int dz1[n+1]={0};
int dz2[n+2][n+2]={0};
for(int q=0;q<=n;q++)
dz1[q]=d1(q);
for(int t1=1;t1<=n;t1++)
for(int t2=1;t2<=n;t2++)
	dz2[t1][t2]=d2(t1,t2);
  int mask=0;
  int zf=pow(2,n)-1;
  
for(  int q=0;q<pow(2,n);q++)
dp[q]=999998999;
 

dp[0]=0;
for(  int q=0;q<=zf;q++)
{
	//cout<<q<<endl;
mask=q;

for(  int w=1;w<=n;w++)
{if((mask&(1<<(w-1)))==0)
	{
for(  int h=w;h<=n;h++)
{
	 
if(h==w  && (mask&(1<<(w-1)))==0)
{	if(dp[mask|(1<<(w-1))]>dp[mask]+dz1[w])
      parent[mask|(1<<(w-1))]=mask;
	dp[mask|(1<<(w-1))]=min(dp[mask|(1<<(w-1))],dp[mask]+dz1[w]);
//cout<<mask<<" "<<(mask|(1<<(w-1)))<<" "<<dp[mask|(1<<(w-1))]<<endl;

}else if(h!=w)
{
  int l1=mask&(1<<(w-1));
  int l2=mask&(1<<(h-1));
if(l1==0 && l2==0)
{
l1=mask|(1<<(w-1));
l2=l1|(1<<(h-1));
if(dp[mask]+dz2[w][h]<=dp[l2])
parent[l2]=mask;
dp[l2]=min(dp[l2],dp[mask]+dz2[w][h]);
//cout<<mask<<" "<<l2<<" "<<dp[l2]<<endl;
}


}


}
break;
}
}
}
cout<<dp[zf]<<endl;
cout<<"0 ";
while(1!=0)
{
  int e=parent[zf]^zf;
//cout<<parent[zf]<<" "<<zf<<endl;
 
for(  int q=0;q<=25;q++)
	if(e&(1<<q))
		cout<<q+1<<" ";
cout<<"0 ";

zf=parent[zf];
if(zf==0)
	break;
}


 
 
}


 





 