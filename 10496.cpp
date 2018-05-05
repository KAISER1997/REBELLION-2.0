#include <bits/stdc++.h>
using namespace std;

int x[9999]={0},y[9999]={0},n;
int  dist(int a,int b)
{
int  e=abs(x[a]-x[b])+abs(y[a]-y[b]);
 
return (e);
}
int wrok[1 << 11][111]={0};
double tsp(int from,int mask,int cure )
{

 
 if (mask == ((1 << n) - 1)) return dist(from,0);
double a=10000000.0d;
for(int e=0;e<n;e++)
{
	if(((1<<e) & mask) )
		continue;
	double ev=a;
	a=min(a,dist(from,e)+tsp( e,mask | 1<<e, cure));
	if(a!=ev)
	{
      wrok[mask][from]=e;
	}

}
return(a); 
}
 
int main() {
    int tc = 0;
    int uz;
    cin>>uz;
    for(int er=1;er<=uz;er++)
    {
     cin>>tc>>tc;
     cin>>x[0]>>y[0];
        cin>>n;
        for (int i = 1; i <=n; i++) {
            cin >> x[i] >> y[i];
        }
        n=n+1;
           double best =10000000.0d;
        int current = 0;
         
            int d = (int)tsp(0, 1 ,0 );
            // cout<<d<<endl;
             
        printf("The shortest path has length %d\n",d);
    }
        }         
         
 





 
 



 







 