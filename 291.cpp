#include <bits/stdc++.h>
using namespace std;
vector<int> arr;
int dp[5][5] = {{0,1,1,0,1},{1,0,1,0,1},{1,1,0,1,1},{0,0,1,0,1},{1,1,1,1,0}};
void DFS(int start,int s,int l)
{
	if(l==8){

		arr.push_back(s);
		return;
	}
for(int e=0;e<5;e++)
{
if(dp[start][e]==1)
{
dp[start][e]=0;
dp[e][start]=0;
DFS(e,s*10+(e),l+1);
dp[start][e]=1;
dp[e][start]=1;
}
}

}

int main()
{
DFS(0,0,0);
sort(arr.begin(),arr.end());
for(int e=0;e<arr.size();e++)
{
cout<<111111111+arr[e]<<endl;

}


}