#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
vector<int >arr;
int g1[100008]={0};
int g2[100008]={0};
int gg2[1000008]={0};
cin>>n;
for(int e=1;e<=n;e++)
{
	int b;
	cin>>b;
arr.push_back(b);
}
long long int tot=0;
int q=0;
for(int w=arr.size()-1;w>=0;w--)
{
if(g2[arr[w]]==0)
{
g2[arr[w]]=1;
++q;
}
gg2[w]=q;

}
for(int w=0;w<arr.size()-1;w++)
{
if(g1[arr[w]]==0)
{
g1[arr[w]]=1;
tot+=gg2[w+1];
}

}

cout<<tot;


}