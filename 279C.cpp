#include <bits/stdc++.h>
using namespace std;
int main()
{
int arr[111111]={0},ve[111111]={0},arr2[111111]={0};

int n;
cin>>n;
int q;
cin>>q;
int a=0,b=0,st=1,prev,j;
for(int e=1;e<=n;e++)
{
	cin>>j;
	ve[e]=j;
if(e==1)
{
 
arr[e]=st;
}
else
{
if(j==prev)
{
arr[e]=st;
}
else if(j>prev)
{
	if(b==1){
		b=0;
		++st;
		int p2=j;
		for(int q=e-1;q>=1;q--)
		{  if(ve[q]<=p2)
			arr2[q]=st;
			else
				break;
			p2=ve[q];
		}
		 
}
arr[e]=st;

}
else
{
arr[e]=st;
b=1;


}

}



prev=j;

}
 
for(int w=1;w<=q;w++)
{
cin>>a>>b;
if(arr[a]==arr[b])
	cout<<"Yes";
else if( arr2[a]==arr[b])
	cout<<"Yes";
else
	cout<<"No";

cout<<endl;

}

}






