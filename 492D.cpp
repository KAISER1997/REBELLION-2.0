#include <bits/stdc++.h>
using namespace std;
typedef long long int intz;
intz x,y;
intz n;
int main()
{
 cin>>n;
cin>>x>>y;
intz cx=0,cy=0;
vector<string> arr;
while(arr.size()<(x+y))
{

if((double)(cx+1)/x<(double)(cy+1)/y)
{   
	++cx;
	arr.push_back("Vanya");
	//cout<<arr.size()<<endl;
}
else if((double)(cx+1)/x>(double)(cy+1)/y)
{
	++cy;
	arr.push_back("Vova");
}
else
{    arr.push_back("Both");
arr.push_back("Both");
	++cx; ++cy;
}
 
}
for(int e=1;e<=n;e++)
{
intz z;
cin>>z;
z=(z-1)%(x+y);
cout<<arr[z]<<endl;

}
}
