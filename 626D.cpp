#include <bits/stdc++.h>
using namespace std;
long long int bin[111111]={0};
void update(long long int pos  ,long long int val )
{
bin[pos]+=val;

while(pos<=10005)
{
pos=pos+(pos&(-pos));
bin[pos]+=val;
}
}
long long int sumv(int pos)
{
long long int sum=0;
	while(pos>0)
{
 
sum=sum+bin[pos];
 
pos=pos-(pos&(-pos));
} 

return(sum);
}

int main()
{
int n;
cin>>n;
vector<int > arr;
for(int e=0;e<n;e++)
{int b;
	cin>>b;
arr.push_back(b);

}
sort(arr.begin(),arr.end());
vector<int > uu;
long long int countt[11111]={0};
for(int e=0;e<arr.size();e++)
{
for(int f=e+1;f<arr.size();f++)
{
	if(countt[arr[f]-arr[e]]==0)
	{
uu.push_back(arr[f]-arr[e]);
//cout<<arr[f]-arr[e]<<endl;
}
countt[arr[f]-arr[e]]+=1;
}
}

vector<int > sum;
for(int l=0;l<uu.size();l++)
{
for(int lv=0;lv<uu.size();lv++)
{
long long int s=uu[l]+uu[lv];
//cout<<s<<endl;
update(s,countt[uu[l]]*countt[uu[lv]]);
}
}
double ans=0;
for(int r=0;r<uu.size();r++)
	ans+=countt[uu[r]]*sumv(uu[r]-1);
 
double ll=(n)*(n-1)/2;
double gf=ll*ll*ll;
double final=ans/gf;
cout<<final;
}























 