#include <bits/stdc++.h>
using namespace std;
typedef long long int intz;
int main()
{
intz A1,L1,A2,L2,C,X,Y;
cin>>A1>>L1>>A2>>L2;

cin>>C>>X>>Y;
int start=0,stop=C;
int xl=0;
 for(intz mid=0;mid<=C;mid++)
 {
intz s1=ceil((double)L2/(A1+mid*X));
intz s2=ceil((double)(L1+(C-mid)*Y)/A2);
if(s1<=s2)
{
xl=1;

break;
 }
}
cout<<xl;
}