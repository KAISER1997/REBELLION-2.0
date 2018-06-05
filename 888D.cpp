#include <bits/stdc++.h>
using namespace std;
typedef long long int intz;
intz dera(intz n)
{
if(n==1)
	return(0);
if(n==2)
	return(1);

return((n-1)*(dera(n-1)+dera(n-2)));
}
intz fun(intz n,intz k)
{
if(k==1) return(n);
if(k==2) return((n*(n-1))/2);
if(k==3) return((n*(n-1)*(n-2))/6);
if(k==4) return((n*(n-1)*(n-2)*(n-3))/24);

}

 int main()
 {

intz n,k;
cin>>n>>k;
intz total=0;
for(intz e=1;e<=k;e++)
	total+=fun(n,e)*dera(e);
total+=1;
cout<<total;

 }