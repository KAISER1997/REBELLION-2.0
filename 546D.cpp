#include <bits/stdc++.h>
using namespace std;
vector<int > prim;
int divPrime[6000000]={0};
bool prime[6000002];
int dp[6000000]={0};
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

 
void cp(int n)
{
 dp[1]=0;
 for(int e=2;e<=n;e++)
 	if(prime[e])
 		dp[e]=1;
 	else
 		dp[e]=dp[e/divPrime[e]]+1;


}

 


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);


	SieveOfEratosthenes(5200000);
	cp(5100000);
		int q;
	cin>>q;
 int sv=0;
 vector<int> arr;
 arr.push_back(0);
 int sum=0;
 for(int e=1;e<=5200000;e++)
 	{sum+=dp[e];
 		arr.push_back(sum);
 }
for(int e=1;e<=q;e++)
{
int a,b; cin>>a>>b;
cout<<arr[a]-arr[b]<<'\n';

}
}

