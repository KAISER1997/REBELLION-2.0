#include <bits/stdc++.h>
using namespace std;

int gcd(int u, int v)
{
    return u%v==0?v:gcd(v,u%v);
}
struct Kil
{
int a;
int b;
int c;
};
Kil seg[800000];
vector<int> arr;
void build(int i,int start,int stop)
{
	Kil p;
if(start==stop)
{
p.a=arr[start];
p.b=1;
p.c=arr[start];
seg[i]=p;
}
else
{
int mid=(start+stop)/2;
build(2*i,start,mid);
build(2*i+1,mid+1,stop);
Kil x,y;
x=seg[2*i];
y=seg[2*i+1];
 p.a=-1;p.b=0;
	p.c=gcd(x.c,y.c);
if( x.a==y.a && x.a!=-1)
{
p.a=x.a;
p.b=x.b+y.b;
p.c=x.a;
}

else
{ 
if(y.a!=-1 && (x.c%y.a)==0)
{
p=y;
}
else if(x.a!=-1 && (y.c%x.a)==0)
{
p=x;
}
}
seg[i]=p;



}
}

Kil query(int i,int start,int stop,int l,int r)
{
int mid=(start+stop)/2;
Kil p,x,y;
if(start>r || stop<l || start>stop)
{
p.a=-2;p.b=0;p.c=0;
return(p);
}
if(start>=l && stop<=r)
	return(seg[i]);
else
{
	
x=query(2*i,start,mid,l,r);
y=query(2*i+1,mid+1,stop,l,r);
if(x.a!=-2 && y.a!=-2)
{
if(x.a==y.a && x.a!=-1)
{
p.a=x.a;
p.b=y.b+x.b;
p.c=x.a;
}
else if(y.a!=-1 && x.c%y.a==0)
{
p.a=y.a; p.b=y.b; p.c=y.a;
}
else if(x.a!=-1 && y.c%x.a==0)
{
p.a=x.a; p.b=x.b; p.c=x.a;

}
else
{
p.a=-1;
p.b=0;
p.c=gcd(x.c,y.c);

}



}

else if(x.a==-2 && y.a!=-2)	
{
p=y;
}
else if(x.a!=-2 && y.a==-2)
	p=x;
return p;
}


}






int main()
{
arr.push_back(0);
int n;
cin>>n;
for(int e=1;e<=n;e++)
{
int g;
cin>>g;
arr.push_back(g);
}
build(1,1,n);
int m;
cin>>m;
for(int e=1;e<=m;e++)
{
int az,bz;
cin>>az>>bz;
Kil z=query(1,1,n,az,bz);
//cout<<z.a<<" "<<z.b<<endl;

int p=bz-az+1-z.b;
  cout<<p<<endl;

}




}



