#include <bits/stdc++.h>
using namespace std;
 
map<int,map<int,int > >mp;map<int,map<int,int > >res;
map<int,int > prt;
vector<int > arr[1000001];
void retrace(int start,int pos)
{
int g=pos;
	int mint=9999999;
while(1!=0)
{  
int e=prt[pos];
mint=min(mp[e][pos]-res[e][pos] ,mint);
//cout<<mp[e][pos]<<" "<<res[e][pos]<<endl;
pos=e;

if(e==start)
	break;
}
pos=g;
int z=mint;
//cout<<z<<endl;
while(1!=0)
{
int e=prt[pos];
//cout<<e<<endl;
res[e][pos]+=z;
res[pos][e]-=z;
//cout<<e<<" "<<pos<<" "<<z<<endl;
pos=e;
if(e==start)
	break;

}
}

 int MAXF(int start,int stop)
 {
 
 	int xz=5;
 	while(1!=0)
 	  { prt.clear();
 		 
 		//cout<<endl;
 		xz--;
 		map<int,int> check;
 		int eva=-1;
queue<int> qq;
qq.push(start);
 
int l=0;
while(!qq.empty())
{
int z=qq.front(); qq.pop();
 
if(check[z]==1)
continue;
 
check[z]=1;
if(z==stop)
{ l=1;
break;
}
for(int e=0;e<arr[z].size();e++)
{ 

	 
if(mp[z][arr[z][e]]-res[z][arr[z][e]]>0 && check[arr[z][e]]==0 && prt[arr[z][e]]==0)
{
	prt[arr[z][e]]=z;
	qq.push(arr[z][e]);
}
}
}
if(l==1)
{
	 
retrace(start,stop);

}
else break;

 }

}

int main()
{ 
	int fg=0;
int start,stop;
int edges,n;
while(1!=0)
	{	mp.clear();
		prt.clear();
        res.clear();
		cin>>n;
		if(n==0)
        break;
 ++fg;
  
for(int e=1;e<=n+1;e++)
	arr[e].clear();

cin>>start>>stop>>edges;
for(int e=1;e<=edges;e++)
{
int x,y,c;
cin>>x>>y>>c;
if(c==0)
continue;
if(mp[x][y]==0 && mp[y][x]==0){
mp[x][y]=c;
mp[y][x]=c;
arr[x].push_back(y);
arr[y].push_back(x);
}
// else if(mp[y][x]!=0 && mp[x][y]==0)
else{
	mp[y][x]= c+mp[y][x];
 
//else if(mp[y][x]==0 && mp[x][y]!=0)
	mp[x][y]= c+mp[x][y];
}
}
MAXF(start,stop);
int t=0;
for(int e=0;e<arr[start].size();e++)
	t+=res [start][arr[start][e]];
printf("Network %d\n",fg);
printf("The bandwidth is %d.\n",t);
cout<<endl;
}

}