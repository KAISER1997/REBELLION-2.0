#include <bits/stdc++.h>
using namespace std;
int main()
{
int a,b;
cin>>a>>b;
vector<int > fir;
vector<int > sec;
for(int e=1;e<sqrt(a);e++)
{
if(a%e==0)
{

	fir.push_back(e);
	fir.push_back(a/e);
}
}
if( a%(int)sqrt(a)==0 && (int)sqrt(a)!=fir[fir.size()-1])
	fir.push_back(sqrt(a));

for(int e=1;e<sqrt(b);e++)
{
if(b%e==0)
{

	sec.push_back(e);
	sec.push_back(b/e);
}
}
if(b%(int)sqrt(b)==0 && (int)sqrt(b)!=sec[sec.size()-1])
	sec.push_back(sqrt(b));
sort(fir.begin(),fir.end());
sort(sec.begin(),sec.end());
// for(int e=0;e<fir.size();e++)
// 	cout<<fir[e]<<endl;
int q=0;
int q1,q2;
cin>>q;
for(int hh=1;hh<=q;hh++)
{
cin>>q1>>q2;
vector<int >:: iterator it,it2;
it=lower_bound(fir.begin(),fir.end(),q1);
//cout<<*it;
int maxx=-1;
if(it!=fir.end())
{
for(it2=it;it2!=fir.end();it2++)
{
  
if(*it2>q2)
	break;
 
if(binary_search(sec.begin(), sec.end(), *it2))
	maxx=max(maxx,*it2);

}



}
cout<<maxx<<endl;
 }





}