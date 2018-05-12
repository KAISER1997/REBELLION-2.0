 #include <bits/stdc++.h>
using namespace std;
//#include <bitset>  
 
#define N 5005
#define M 10005
#define inf 0x3f3f3f3f
int a[N], b[N], prime[M], vis[M], num;
int ans[N];
set<int> se;
void init(){
	memset(vis,0,sizeof(vis));
	num = 0;
	for(int i = 2; i < M; i++){
		if(!vis[i]){
			prime[num++] = i;
			for(int j = i+i; j < M; j+=i){
				vis[j] = 1;
			}
		}
	}
}
int change(int x){
	int k = 1;
	if(x <= 0){
		k = -1;
		x = -x;
	}
	for(int i = 0; i < num; i++){
		int temp = prime[i] * prime[i];
		if(temp > x)break;
		while(x % temp == 0)x/=temp;
	}
	return k*x;
}


















int main()
{
	init();
    ios_base::sync_with_stdio(false);
cin.tie(NULL);
	 
 
int n;

cin>>n;
int b;
vector<int > mm;
int gf=0;
for(int e=1;e<=n;e++)
{
	cin>>b;
	if(b!=0)
	{
		gf=7;
}	
mm.push_back(change(b));

//cout<<change(b)<<endl;
}
map<int ,int > zf;
int ct=1;
for(int r=0;r<n;r++)
{
if(zf[mm[r]]==0 && mm[r]!=0)
{
	zf[mm[r]]=ct;
mm[r]=ct;
 
++ct;
}
else if(mm[r]!=0)
mm[r]=zf[mm[r]];

}
int  mp[10005]={0};
 int xx[10005]={0};
for(int g=0;g<n;g++)
{
	 
	 memset(xx,0,sizeof(xx));
	int sz=0,df=0;
for(int e=g;e<n;e++)
{
	if(mm[e]!=0)
	
 
 {  
    if(xx[mm[e]]==0)
    {
        
        xx[mm[e]]+=1;
        ++sz;
    }
     
     
     
 }
 
  if(sz==0)
  	mp[1]+=1;
 
mp[sz]+=1;
}

 
}

if(gf==7)
for(int e=1;e<=n;e++)
	cout<<mp[e]<<" ";

else
{
cout<<(n*(n+1))/2<<" ";
for(int e=2;e<=n;e++)
	cout<<"0 ";



}


}