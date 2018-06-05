#include <bits/stdc++.h>
using namespace std;
typedef long long int intz;
intz m,n;
intz bin(intz start,intz stop,intz k)
{
intz mid=(start+stop)/2;
intz t=0;
intz u=0;
for(intz e=1;e<=m;e++)
{
if(mid%e==0)
{
if(mid/e>n)
	t+=n;
else
{
t+=(mid/e)-1;
u+=1;
}
}
else 
{
t+=min(mid/e,n);
}

}
if((k>t && k<=u+t) && u!=0)
	return(mid);
else if(k>(u+t) )
{
return(bin(mid+1,stop,k));
}
else  
{
return(bin(start,mid-1,k));
}	




}

int main()
{
intz j;
cin>>m>>n>>j;
cout<<bin(1,m*n,j);

}