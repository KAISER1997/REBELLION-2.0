#include <bits/stdc++.h>
using namespace std;
typedef long long int intz;

intz a1=0;
void fun(intz total,intz k)
{


if(total>=k)
	a1+=k;
else
	a1+=total;
total=total-min(total,k);
// if(k==3)
// cout<<total<<endl;
if(total>0)
{
total=total-(10*total)/100;
// if(k==3)
// cout<<total<<endl;
if(total>0)
fun(total,k);

}
}

int main()
{

intz start=1;
intz stop;
cin>>stop;
intz totalz=stop;
intz mv=totalz;
intz ans;
while(start<=stop)
{
intz mid=(start+stop)/2;
a1=0;
fun(totalz,mid);
totalz=mv;
if(a1*2>=totalz)
{
ans=mid;
stop=mid-1;
}
else
{
start=mid+1;

}




}



cout<<ans;


}