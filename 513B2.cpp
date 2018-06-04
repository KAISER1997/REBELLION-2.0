#include <bits/stdc++.h>
using namespace std;
typedef long long int intz;
//tp=2^(n-1)
intz n;
vector<intz > work(intz e,intz m,intz tp)
{
vector<intz> uu;
if(e==n)
{
uu.push_back(n);
return(uu);

}

 intz l=1;
 intz rt=m;
 if(m>(tp/2))
 {
l=-1;
rt=tp-m+1;
 }
 
uu=work(e+1,rt,tp/2);
uu.insert(uu.begin(),e);
if(l==-1)
	reverse(uu.begin(),uu.end());

return(uu);

}













int main()
{

 intz m;
cin>>n>>m;
intz u=pow(2,n-1);
 vector <intz > zz;
 zz=work(1,m,u);
 for(intz e=0;e<zz.size();e++)
 	cout<<zz[e]<<" ";




// 	 do {
// 	 	int s=0;
//      for(int e=0;e<n;e++)
//      {
// int minr=99999;
// for(int j=e;j<n;j++)
// {
// minr=min(minr,arr[j]);
// s+=minr;
// }
//  }
//  for(int e=0;e<n;e++)
//  	cout<<arr[e]<<" ";
//  cout<<endl;
//  cout<<s<<endl;
//   } while ( std::next_permutation(arr.begin(),arr.end()) );
}