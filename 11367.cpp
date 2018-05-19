#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> ii;
 
 vector<ii> arr[11111111];
int cp,cpz;
int part[1111111]={0};
int price[1001]={0};
int DJikstra(int start,int stop)
{
	//cout<<cp<<endl;
	//int dist[100005]={0};
	int check[100005]={0};
//priority_queue< ii, vector<ii>, greater<ii> > pq;
//pq.push(ii(0,(start)));
vector<int> dist(110005,99999999); dist[start] = 0;
// INF = 1B to avoid overflow
priority_queue< ii, vector<ii>, greater<ii> > pq; pq.push(ii(0, start));
while (!pq.empty()) {
// main loop
ii front = pq.top(); pq.pop(); // greedy: get shortest unvisited vertex
int d = front.first, u = front.second;
if (d > dist[u]) continue;
 if(u>((u/((cp+1)))*(cp+1)+cpz))
continue;
for (int j = 0; j < (int)arr[u].size(); j++) {
ii v =arr[u][j];
 
// all outgoing edges from u
if (dist[u] + v.second*price[(u/(cp+1))  + 1 ] < dist[v.first]) {
dist[v.first] = dist[u] + v.second*price[(u/(cp+1))  + 1 ];
//cout<<v.first<<" "<<dist[v.first]<<endl;
// relax operation
part[v.first]=u;
pq.push(ii(dist[v.first], v.first));
} } }


if(dist[stop]==99999999)
	return(-1);
else
	return(dist[stop]);


}

int main()
{
int n,edges;
cin>>n>>edges;
 
vector< tuple <int , int, int > > geek;
for(int e=1;e<=n;e++)
	cin>>price[e];
for(int e=1;e<=edges;e++)
{
int a,b,c;
  
cin>>a>>b>>c;
a=a+1;
b=b+1;
geek.push_back(make_tuple(a,b,c));

}

int start,stop,ff,a,b,c,start1,stop1,quer;
cin>>quer;
 
  cp=101;
// ++start1;++stop1;
// for(int e=0;e<=(cp+4)*n;e++)
// arr[e].clear();
for(int e=0;e<geek.size();e++)
{
a=get<0>(geek[e]);b=get<1>(geek[e]);c=get<2>(geek[e]) ;
//cout<<a<<" "<<b<<" "<<c<<endl;
int start=((a-1)*(cp+1))+0;
int starF=((b-1)*(cp+1))+0;
for(int e=1;e<=cp;e++)
{
	int q=((a-1)*(cp+1))+e;
	int qF=((b-1)*(cp+1))+e;
	int v=((b-1)*(cp+1))+e-c;
	int vF=((a-1)*(cp+1))+e-c;

	//cout<<start<<" "<<q<<" "<<starF<<" "<<qF<<endl;
arr[start].push_back(ii(q,1));
arr[starF].push_back(ii(qF,1));


start=q;
starF=qF;
if(e>=c)
	arr[start].push_back(ii(v,0));
if(e>=c)
	arr[starF].push_back(ii(vF,0));




 







}


}

//cout<<start1<<" "<<stop1<<endl;
for(int u=1;u<=quer;u++)
{  
	int start1,stop1;
	cin>>cpz>>start1>>stop1;
++start1;++stop1;
int l=DJikstra((start1-1)*(cp+1),(stop1-1)*(cp+1));
if(l==-1)
cout<<"impossible"<<endl;
else
cout<<l<<endl;

 }




}