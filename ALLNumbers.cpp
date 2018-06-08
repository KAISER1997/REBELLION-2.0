#include <bits/stdc++.h>
using namespace std;
typedef long long int intz;
intz x,y,MOD=1000000007;
 void extendedEuclid(intz a, intz b) {
if (b == 0) { x = 1; y = 0;  return; }
extendedEuclid(b, a % b);
intz x1 = y;
intz y1 = x - (a / b) * y;
x = x1;
y = y1;
} 
intz countt[11]={0};
intz jv[200]={0};
//Modulo Inverse   > ax%p =1%p <
 intz inverse( intz a,intz p)
{
extendedEuclid(a,p);
intz ans=(intz)(x+p)%p;
ans=(intz)(ans+p)%p;
return(ans);
}

intz factz[111]={0};
void fact(intz l)
{	

	factz[0]=1;intz p=1;
for(intz e=1;e<=l;e++)
{
p=(intz)(p*e)%MOD;
factz[e]=p%MOD;
//cout<<factz[e]<<endl;

}
}
intz calcB(vector<intz> s)
{ 
	intz p=1;
for(intz e=0;e<s.size();e++)
{
if(countt[s[e]])
{
p=(intz)p*factz[countt[s[e]]]%MOD;
p=p%MOD;
}
}
return(p);
}

intz AbyBmodM(intz a,intz b)
{   intz fg=(intz)inverse(b,MOD)%MOD;
	intz s=(intz)(a*fg)%MOD;
	return(s);
}

intz findAns(vector<intz > z,intz n)
{ 
	intz tt=0;
for(intz e=0;e<z.size();e++)
{
tt+=z[e]*countt[z[e]];
tt=tt%MOD;
}
intz uu=calcB(z);
intz l=(intz)AbyBmodM(factz[n-1],uu)%MOD;
intz ans=(intz)(l*tt)%MOD;
ans=(intz)(ans*jv[n])%MOD;
return(ans);
}



int main()
{

jv[1]=1;
	for(intz e=2;e<=52;e++)
		jv[e]=(jv[e-1]*10+1)%MOD;
fact(52);
intz n,s2,s1;
vector<intz> zf;
cin>>n;
for(intz e=0;e<n;e++)
{

intz l;
cin>>l;
if(countt[l]==0)
	zf.push_back(l);
countt[l]+=1;

}
if(n!=1)
{
intz ans=(intz)findAns(zf,n),ans2=0;
 
if(countt[0]!=0)
{
countt[0]-=1;
ans2=(intz)findAns(zf,n-1);

}
//cout<<ans<<" "<<ans2<<endl;
cout<<(ans-ans2+MOD)%MOD;
}
else
cout<<zf[0];

}


 