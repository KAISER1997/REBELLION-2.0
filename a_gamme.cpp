#include <bits/stdc++.h>
using namespace std;
string s;
int main()
{
	int op;
	cin>>op;
cin>>s;
vector<int > store;
int u=0;
int l=0;
for(int h=0;h<s.length();h++)
{
	if(s[h]=='A')
		++l;

if(u==0 && s[h]=='A')
	continue;
if(s[h]=='B')
	++u;
if(u!=0 && s[h]=='A')
	{
store.push_back(u);
u=0;
	}
}
if(u!=0)
store.push_back(u);
int lv;
if(store.size()!=0)
{
lv=store[0];
for(int we=1;we<store.size();we++)
lv=lv^store[we];


if( l%2==0)
cout<<"-1";
else if(lv==0 && l%2==1)
cout<<"B";
else
	cout<<"A";

}
else
{
if(l%2==0)
	cout<<"-1";
else
	cout<<"B";

}
}




 