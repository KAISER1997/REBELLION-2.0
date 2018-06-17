#include <bits/stdc++.h>
using namespace std;
vector<int > prim;
int divPrime[2000000]={0};
bool prime[2000002];
 void SieveOfEratosthenes(int n)
 
 
{
     
    memset(prime, true, sizeof(prime));
 
    for (int p=2; p*p<=n; p++)
    {
        if (prime[p] == true)
        {
            for (int i=p*2; i<=n; i += p)
                {prime[i] = false;

                    divPrime[i]=p;
                }
        }}
    for (int p=2; p<=n; p++)
       if (prime[p])
          prim.push_back(p);
}

int main()
{
SieveOfEratosthenes(1000002);
int z[2000002]={0};
prime[1]=0;
prime[0]=0;
//cout<<prime[4];
for(int t=1;t<=1000001;t++)
if(prime[t])
	z[t]=z[t-1]+1;
else
	z[t]=z[t-1];

int a,b,k;
cin>>a>>b>>k;
int start=1,stop=b-a+1,ans=-1;
while(start<=stop)
{
int mid=(start+stop)/2;
int t=0;
for(int e=a;e<=b-mid+1;e++)
{
if(z[e+mid-1]-z[e-1]<k)
t=-1;
}

if(t==-1)
	start=mid+1;
else
{
	ans=mid;
	stop=mid-1;
}

}

cout<<ans;

}
