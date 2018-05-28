#include <bits/stdc++.h>
using namespace std;
typedef long long int intz; 
vector<intz > arr;
intz cal[5001][5001];
intz dp2[5001][5001];
intz calc(intz l,intz r)
{
if(l==r)
	return(arr[l]);

if(cal[l][r]!=-1)
	return(cal[l][r]);
intz a=calc(l,r-1);
intz b=calc(l+1,r);

return(cal[l][r]=a^b);

}

intz maxim(intz l,intz r)
{
	if(l==r)
		return(arr[l]);
if(dp2[l][r]!=-1)
	return(dp2[l][r]);
intz q1,q2,q3;

q1=maxim(l,r-1);
q2=maxim(l+1,r);
q3=calc(l,r);
intz q4=max(q1,max(q2,q3));
return(dp2[l][r]=q4);
}







int main()
{
	memset(dp2, -1, sizeof(dp2));
  memset(cal, -1, sizeof(cal));
 intz n;
 cin>>n;
 arr.push_back(-1);
 for(intz e=0;e<n;e++)
 {
int z;
cin>>z;
arr.push_back(z);
 }
intz q;
cin>>q;
for(intz e=1;e<=q;e++)
	{ intz a,b; 
		cin>>a>>b;
	cout<<maxim(a,b)<<endl;

}
}



