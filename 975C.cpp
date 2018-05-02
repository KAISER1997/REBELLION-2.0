#include <bits/stdc++.h>
using namespace std;
int main()
{
long long int  x,y,u=0,v,tot=0,j;
cin>>x>>y;
vector<long long int > stren;
vector<long long int > arr;
vector<long long int > :: iterator it,god;
for(long long  int e=1;e<=x;e++)
	{cin>>u;
		 tot+=u;
	stren.push_back(tot);
}
god=stren.begin();
for(long long int e=1;e<=y;e++)
	{cin>>v;
	arr.push_back(v);
} 
	long long  int val=0;
	vector<long long int > zf=stren;
 u=0;
for(int e=0;e<arr.size();e++)
{
	  
	it=upper_bound(god,stren.end(),val+arr[e]);

	if(it!=stren.begin())
	{
       int u=*(it-1);
       j=val;
       val=u;
       val+=j+arr[e]-u;
	}
	else
	{    j=val;
		val=0;
		val+=j+arr[e]-0;
	}
	god=it;
if(god==stren.end())
{
val=0;
god=stren.begin();
cout<<x <<endl;
}
else
cout<<x-(god-stren.begin())  <<endl;
}

}
 

