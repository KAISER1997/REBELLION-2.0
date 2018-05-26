#include <bits/stdc++.h>
using namespace std;
vector<string> s;
 int lv=11;
 long long int ctBits(long long int n)
{
long long int g=0;
for(long long int e=0;e<=lv;e++)
if(n&(1<<e))
	++g;
return(g);
}
int chec(int i)
{
	 
	int x[111]={0},y[11]={0};
	int gg=0;
for(int e=0;e<10;e++)
{
if(i&(1<<e))
{ y[e]+=1;
 for(int r=0;r<s.size();r++)
 {
if((e==0 && s[r][0]=='R')||(e==1 && s[r][0]=='G') || (e==2 && s[r][0]=='B') || (e==3 && s[r][0]=='Y') || (e==4 && s[r][0]=='W') || (e==5 && s[r][1]=='1') || (e==6 && s[r][1]=='2') || (e==7 && s[r][1]=='3') || (e==8 && s[r][1]=='4') || (e==9 && s[r][1]=='5'))
{x[r]+=1;
 

}
 }

}
}
int eva[11]={0};
int lz=0;
map<string ,int > ll;
for(int e=0;e<s.size();e++)
{   

	if(x[e]==1) ++lz;
int t1;
if(s[e][0]=='R') t1=0; else if(s[e][0]=='G') t1=1;
else if(s[e][0]=='B') t1=2; else if(s[e][0]=='Y') t1=3; else t1=4;
int t2=s[e][1]-48+4;
	if(x[e]==2)
	++gg;

	if(x[e]==1 && ll[s[e]]==0)
	{
      if(y[t2]==1)
         eva[t2]+=1;
     if(y[t1]==1)
         eva[t1]+=1;

	}
ll[s[e]]=1;
}
int gf=0;
for(int e=0;e<s.size();e++)
{
	int t1;
if(s[e][0]=='R') t1=0; else if(s[e][0]=='G') t1=1;
else if(s[e][0]=='B') t1=2; else if(s[e][0]=='Y') t1=3; else t1=4;
int t2=s[e][1]-48+4;
if((x[e]==1 && y[t1]==1 && eva[t1]==1) || (x[e]==1 && y[t2]==1 && eva[t2]==1) )
	{
++gf;


	}

}


set<string>sss;
for(int e=0;e<s.size();e++)
{
if(x[e]==0)
{
sss.insert(s[e]);

}

}
if(sss.size()==1 && lz==gf)
return(1);
if((gf+gg)==s.size() || (gf+gg)==s.size()-1 )
	return(1);
else return 0;



}






int main()
{
	int n;
	cin>>n;
 long long int m=99999999;

	for(int e=1;e<=n;e++)
	{string b;
cin>>b;
s.push_back(b);}
int a=pow(2,10)-1;
if(chec(0)==1)
	m=0;

for(int e=0;e<=a;e++)
{
int mask=e;

for(int r=0;r<10;r++)
{
if((mask&(1<<r))==0)
{
	int gs=(mask|(1<<r));
  int l=chec(gs);
  if(l==1)
  	{m=min(m,ctBits(gs));
  		 
}

}


}



}
cout<<m;
}














 