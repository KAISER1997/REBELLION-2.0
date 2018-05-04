#include <bits/stdc++.h>
using namespace std;
int main()
{
 
int total,n;
while(cin>>total>>n)
{
	 if (n==-1)
	 break;
	 	 
	total+=200; 
int arr[102][10902]={0},q[102]={0},val[102]={0};
for(int e=0;e<=101;e++)
for(int ev=1;ev<=10901;ev++)
	arr[e][ev]=-1;
 
for(int e=1;e<=n;e++)
	cin>>q[e]>>val[e];
for(int g=1;g<=n;g++)
{
for(int f=1;f<=total;f++)
{
if(f<q[g]){
	//actual[g][f]=actual[g-1][f]
	arr[g][f]=arr[g-1][f];
}
else
{
	if(arr[g-1][f-q[g]]!=-1)
arr[g][f]=max(arr[g-1][f],val[g]+arr[g-1][f-q[g]]);
else
arr[g][f]=arr[g-1][f];
}
}
 
}

int maxx=-1;

for(int e=0;e<=total-200;e++)
{
 
	maxx=max(maxx,arr[n][e]);

} 
if(total-200<=2000 )
{
	if(total>2000)
	for(int e=2001;e<=total;e++)
 
{
 
	maxx=max(maxx,arr[n][e]);

} 

}
else
{
for(int e=total-200;e<=total;e++)
{
 
	maxx=max(maxx,arr[n][e]);

} 

}

cout<<maxx<<endl;
 
 





}


}

 