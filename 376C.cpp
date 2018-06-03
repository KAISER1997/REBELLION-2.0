#include <bits/stdc++.h>
using namespace std;
int main()
{
vector<int> arr,ans;
vector<int> h[11];
arr.push_back(1); arr.push_back(6); arr.push_back(8); arr.push_back(9);
 do {
    //std::cout << arr[0]<< arr[1] << arr[2]<<arr[3] << '\n';
  int u=1000*arr[0]+100*arr[1]+10*arr[2]+arr[3];
//cout<<u%7<<endl;
h[u%7].push_back(u);
  } while ( std::next_permutation(arr.begin(),arr.end()) );


string s;
cin>>s;
int prev=0;
vector<int > arr2[11];

for(int e=0;e<s.length();e++)
{
int h=s[e]-48;
if(h==0){
arr2[0].push_back(0);
continue;

}
if(h==1 || h==6 ||h==8 ||h==9)
{
if(arr2[h].size()==0)
{
arr2[h].push_back(h);
continue;
}
}
ans.push_back(h);
prev=(prev*10+h)%7;


}
prev=(prev*10000)%7;
int u=7-prev;
u=u%7;
for(int e=0;e<ans.size();e++)
	cout<<ans[e];
if(h[u].size()!=0)
cout<<h[u][0];
for(int e=0;e<arr2[0].size();e++)
cout<<"0";


}