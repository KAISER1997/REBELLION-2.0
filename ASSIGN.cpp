#include <bits/stdc++.h>
using namespace std;
typedef long long int intz;
intz ctBits(intz n)
{
intz s=0;
while(n!=0)
{
s+=n%2;
 
n=n/2;
}
return(s);
}





int main()
{
intz q;
cin>>q;
for(int rt=1;rt<=q;rt++)
{
intz n;
intz arr[30][30]={0};
cin>>n;
for(intz e=1;e<=n;e++)
for(intz f=1;f<=n;f++)
	cin>>arr[e][f];
intz p=pow(2,n);
intz dp[p+1]={0};
dp[0]=1;
for(intz e=0;e<p;e++)
{
intz jp=ctBits(e);
for(intz ef=0;ef<n;ef++)
{
 if((e&(1<<ef))==0 && (arr[jp+1][ef+1]==1))
 	dp[e|(1<<ef)]+=dp[e];
}
}
cout<<dp[p-1]<<endl;

}


}




 