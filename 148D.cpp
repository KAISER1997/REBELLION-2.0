#include <bits/stdc++.h>
using namespace std;
 
 double dp[1002][1002]={0};
 int used[1000+1][1000+1];
 
double prob(int w,int b)
{
 int rr=b;
 
if(w<=0||b<0)
		return 0;
if(b==0 && w!=0)
	return(1);


 if(used[w][b])
 {      
 	//cout<<"die";
 	return(dp[w][b]);

 }
 double s3,s4,s5,s6=0;
double s1=1.0*w/(w+b);
double s2=1.0*b/(w+b);
--b;
  s3=(1.0*b/(b+w));
  if(b>=1)
  {
if(b>=2)
{
 s4=(1.0*(b-1))/(w+b-1);
s6+=s4*prob(w,b-2);
}
  if(w>=1)
  {
 s5=(1.0*w)/(w+b-1);
 s6+=s5*prob(w-1,b-1);
}
 }
//cout<<s5<<endl;
double s7=(s6*s3*s2)+s1;
used[w][rr]=1;
dp[w][rr]=s7;
return(s7);




}

int main()
{
int w,b;
cin>>w>>b;
cout<<fixed;
 
 
cout<<setprecision(10);
cout<<prob(w,b);

 


}