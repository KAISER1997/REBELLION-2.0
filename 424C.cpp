#include <bits/stdc++.h>
using namespace std;
int main()
{

int  n;
cin>>n;
int arr[2000000]={0};
for(int e=1;e<=n;e++)
{
	arr[e]=arr[e-1]^e;
}

int as=0;
for(int e=1;e<=n;e++)
{
	int g;
	cin>>g;
	int at=0;
int q=n/e;
if(q%2==0)
	at=0;
else
	at=arr[e-1];
	at=at^arr[n-q*e];

as=as^g^at;


}
cout<<as;





}