#include <bits/stdc++.h>
using namespace std;

int x[9999]={0},y[9999]={0},n;
double dist(int a,int b)
{
double e=sqrt((x[a]-x[b])*(x[a]-x[b]) + (y[a]-y[b])*(y[a]-y[b]));
e=e+16.0;
return (e);
}
int wrok[1 << 8][111]={0};
double tsp(int from,int mask,int cure )
{

 
 if (mask == ((1 << n) - 1)) return 0.0;
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
    while (cin >> n, n) {
        tc++;
        printf("**********************************************************\nNetwork #%d\n", tc);
       
        for (int i = 0; i < n; i++) {
            cin >> x[i] >> y[i];
        }
           double best =10000000.0d;
        int current = 0;
        for (int i = 0; i < n; i++) {
            double d = tsp(i, 1 << i,i );
            // cout<<d<<endl;
            if (d < best) {
                best = d;
                current = i;
            }
        }
                int mask = 0;
        double total = 0;
        int z=current;
        int iv=1<<current;
        for (int i = 0; i < n - 1; i++) {
        
            int next = wrok[iv][z];
            z=next;
            iv=iv|1<<next;
            double d = dist(current,next)  ;
            total += d;
            printf("Cable requirement to connect (%d,%d) to (%d,%d) is %.2f feet.\n",
              x[current], y[current], x[next], y[next], d);
            current = next;
        }
        printf("Number of feet of cable required is %.2f.\n", total);
    }
}





 
 



 







 