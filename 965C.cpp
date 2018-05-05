#include <bits/stdc++.h>
using namespace std;
 int main()
 {
long long n,k,M,D,mx=-1;
scanf("%lld%lld%lld%lld",&n,&k,&M,&D);
for(long long int  e=1;e<=D;e++)
{   long long int   ev=(k*(e-1)+1);
	long long int  gh=n/ev;
 long long  int y=min( gh,M);
 mx=max(mx,y*e);
}
printf("%lld\n",mx);

}