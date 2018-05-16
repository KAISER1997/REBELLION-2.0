#include <bits/stdc++.h>
using namespace std;
int gcd(int u, int v)
{
    return u%v==0?v:gcd(v,u%v);
}
long long int x,y,d;
 
//general soln=>>>   x = x 0 + (b/d)n, y = y 0 − (a/d)n





int main()
{
 int a=10,b=1;
 long long int n;
 while(cin>>n)
 { vector<long long int >ar;
 	if(n==0)
 		break;
 for(long long int e=min((long long)9,n);e>=0;e--)
 {
if((n-e)%9 ==0)
{
y=(n-e)/9;
x=y+n;
 ar.push_back(x);

}


 }
 for(int e=0;e<ar.size();e++)
 	if(e!=ar.size()-1)
 		cout<<ar[e]<<" ";
 	else
 		cout<<ar[e];
  
  
 cout<<endl;

}

}