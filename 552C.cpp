 #include <bits/stdc++.h>
 using namespace std;

int w;
int intlog(double base, double x) {
    return (int)(log(x) / log(base));
}

int maxz(int a,int b,int c)
{
return(max(a,max(b,c)));


}
int n;
 int recur(int b,int times)
 {
if(times==n)
{
if(b>=-1 && b<=1)
	return(1);
else
	return(-1);


}

int x=-1,y=-1,z=-1;
if((b-1)%w==0)
	x=recur((b-1)/w,times+1);
if((b)%w==0)
	y=recur((b)/w,times+1);
if((b+1)%w==0)
	z=recur((b+1)/w,times+1);

return(maxz(x,y,z));

 }
 int main()
 {

int b;
cin>>w>>b;
int s=intlog((double)w,(double)b )+2;


n=s;
//cout<<n<<endl;
int pl=recur(b,0);
if(pl==1)
	cout<<"YES";
else
	cout<<"NO";


 }