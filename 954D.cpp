#include <bits/stdc++.h>
using namespace std;
int dist[1001][1001]={0};
 vector<int> arr[1002];
int BFS(int start)
{
queue<int >x;
int check[1111]={0};
check[start]=1;
x.push(start);
while(!x.empty())
{
int op=x.front();
x.pop();
for(int e=0;e<arr[op].size();e++)
{
if(check[arr[op][e]]==0)
{

check[arr[op][e]]=1;
dist[start][arr[op][e]]=dist[start][op]+1;
x.push(arr[op][e]);
}

}


}



}





int main()
{

int ax[1001][1001]={0};

int n,edges,start,stop,t=0;
cin>>n>>edges>>start>>stop;
for(int e=1;e<=edges;e++)
{
int a,b;
cin>>a>>b;
ax[a][b]=1;
ax[b][a]=1;
arr[a].push_back(b);
arr[b].push_back(a);
}
BFS(start);
BFS(stop);
int ans=0;
//cout<<dist[start][stop]<<endl;
for(int e=2;e<=n;e++)
{
for(int q=1;q<e;q++)
{
if(ax[q][e]==0)
{  //cout<<"D"<<q<<"D"<<e<<endl;
	int qv=0;
if(dist[start][q]+dist[stop][e]+1>=dist[start][stop])
	++qv;
 if(dist[start][e]+dist[stop][q]+1>=dist[start][stop])
++qv;
// cout<<q<<" "<<e<<" "<<dist[start][q]<<" "<<dist[stop][e]<<endl;
// cout<<e<<" "<<q<<" "<<dist[start][e]<<" "<<dist[stop][q]<<endl;

if(qv==2)
	++t;
}
}

}
cout<<t;

}




