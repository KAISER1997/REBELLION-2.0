#include <bits/stdc++.h>
using namespace std;
string comprz(string h)
{
string l="";
int arr[300]={0};
for(int e=0;e<h.length();e++)
{
if(arr[h[e]]==0)
{
l=l+h[e];
arr[h[e]]+=1;
}
}
return(l);

}









int main()
{
int n;
cin>>n;
vector<string> words;
for(int e=1;e<=n;e++)
{
string g;
cin>>g;
sort(g.begin(),g.end());
words.push_back(g);
}
set<string > ll;
for(int e=0;e<words.size();e++)
{
string u=comprz(words[e]);
ll.insert(u);
}
cout<<ll.size();
}



 