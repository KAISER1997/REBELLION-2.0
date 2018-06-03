#include <bits/stdc++.h>
using namespace std;
int main()
{map<int,int > mp;
 int n;
 cin>>n;
 vector<int> arr;
 for(int e=0;e<n;e++)
 {
int b;
cin>>b;
mp[b]=1;
arr.push_back(b);
 } 

sort(arr.begin(),arr.end());
vector<int> ll;
int mx=-1;
for(int e=0;e<arr.size();e++)
{
	int start=arr[e];
for(int f=0;f<=32;f++)
{
	int u=pow(2,f); int u2=pow(2,f+1);
	if(mx<1)
	{
		ll.clear();
		mx=1;
		ll.push_back(start);
	}
if(mp[start+u]==1)
{
if(mx<2)
{
	mx=2;
ll.clear();
ll.push_back(start);
ll.push_back(start+u);

}
if(mp[start+u2]==1)
{
if(mx<3)
{
	mx=3;
ll.clear();
ll.push_back(start);
ll.push_back(start+u);
ll.push_back(start+u2);
}

}


}



}
}
cout<<mx<<endl;
for(int e=0;e<ll.size();e++)
cout<<ll[e]<<" ";

}




 