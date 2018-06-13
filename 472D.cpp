#include <bits/stdc++.h>
using namespace std;
int fv=0;
int arr[2001][2001]={0};
vector<int>graph[2001];
int dist[2001][2001]={0};
void DFS(int start,int q,int checkz[],int distz)
{//cout<<start<<endl;

if(checkz[start]==1)
	return;
if(distz!=arr[q][start])
	{
     //cout<<distz<<" "<<arr[q][start]<<endl;
		fv=-1;

	}
checkz[start]=1;

for(int e=0;e<graph[start].size();e++)
{

DFS(graph[start][e],q,checkz,distz+dist[start][graph[start][e]]);

}







}










int main()
{

	ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;

for(int e=1;e<=n;e++)
for(int g=1;g<=n;g++)
{
	cin>>arr[e][g];
	if(e!=g && arr[e][g]==0)
		fv=-1;
}

int check[2001]={0};
for(int f=1;f<=n-1;f++)
{
	int mx=0,vt;
for(int e=2;e<=n;e++)
{
if(check[e]==0)
{
if(arr[1][e]>mx)
{
vt=e;
mx=arr[1][e];
}}


}
check[vt]=1;
int mint=1000000008,vt2;
for(int u=1;u<=n;u++)
{
if(arr[vt][u]<mint && vt!=u && check[u]==0)
{

	vt2=u;
	mint=arr[vt][u];
}

}
graph[vt].push_back(vt2);
graph[vt2].push_back(vt);
dist[vt][vt2]=mint;
dist[vt2][vt]=mint;

//cout<<vt<<" "<<vt2<<" "<<mint<<endl;

}

for(int er=1;er<=n;er++)
{
int checkz[2002]={0};
DFS(er,er,checkz,0);

}
if(fv==0)
	cout<<"YES";
else
	cout<<"NO";






}









