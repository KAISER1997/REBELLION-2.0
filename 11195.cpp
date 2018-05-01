#include <bits/stdc++.h>
using namespace std;
int n;
bitset<20>  rw, upd,dwnd;
int val,z=1;
void backtrack(int col,string chess[20])
{

if(col==n+1)
	++val;
{

for(int t=1;t<=n;t++)
{

if(rw[t]==0 && upd[t+col]==0 && dwnd[t-col+n]==0 && chess[t][col]=='.')
{
rw[t]=1 , upd[t+col]=1  , dwnd[t-col+n]=1;
backtrack(col+1,chess);
rw[t]=0 , upd[t+col]=0  , dwnd[t-col+n]=0;
}
}



}
}












int main()
{
	while(1!=0)
	{
		cin>>n;
		if(n==0)
			break;
	 
 val=0;
 
string chess[20];
for(int e=1;e<=n;e++)
{
cin>>chess[e];
chess[e]=' '+chess[e];
}

backtrack(1,chess);
 
printf("Case %d: %d\n",z,val);
++z;
rw.reset(), upd.reset(),dwnd.reset();
}
}