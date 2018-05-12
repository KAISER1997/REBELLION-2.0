#include <bits/stdc++.h>
using namespace std;
long long int mod=1000000007;
long long int store[2002][2002]={0};
 long long int ncrModp( long long int n, long long int r, long long int p)
 
{
 long long int value[9999]={0};
value[0]=1;
for( long long int e=1;e<=n;e++)
{
	store[e][0]=1;
for( long long int f=e;f>0;f--)
{
value[f]=(value[f]+value[f-1])%p;
 //cout<<value[f]<<" ";
store[e][f]=value[f];
}
 
// cout<<endl;
}
return(value[r]);

}

 
int main()
{
ncrModp(1000,1000,mod);
 long long int n,l;
 long long int a2[11111]={0};
 a2[1]=2;
 for(int e=2;e<=1000;e++)
 {
a2[e]=(a2[e-1]*2)%mod;
 }
cin>>n;
cin>>l;
vector< long long int> arr,vv;
 long long int start=0;
for(int e=0;e<l;e++)
{
 long long int kh;
cin>>kh;
vv.push_back(kh);

}
sort(vv.begin(),vv.end());
for(int e=1;e<=l;e++)
{
	 long long int hg=vv[e-1];
	 
arr.push_back(hg-start-1);
start=hg;


}
arr.push_back(n-start);

// for(int e=0;e<arr.size();e++)
// cout<<arr[e]<<endl;
 long long int q=n-l;
 long long int tot =1;
 
for(int er=1;er<arr.size()-1;er++)
{
if(arr[er]>1)
	tot=(tot* a2[arr[er]-1])%mod;
tot=(tot*ncrModp(q,arr[er],mod))%mod;
q=q-arr[er];
 //cout<<tot<<endl;
}
 //cout<<arr[0];
long long int vt=ncrModp(q,arr[0],mod);
//cout<<vt<<" "<<tot<<endl;
	tot=(tot*vt)%mod;
	//cout<<tot;
	q-=arr[0];
tot=(tot*ncrModp(q,arr[arr.size()-1],mod))%mod;

cout<<tot;





}