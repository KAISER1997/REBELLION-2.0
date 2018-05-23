#include <bits/stdc++.h>
using namespace std;
vector<pair<long long int,long long int > >ll;
long long int work(long long int nm)
{  
if(nm>=1900 && ll[0].second==2)
	return(-1);
else if(nm<1900 && ll[0].second==1)
	return(1);

 long long int n=nm;
	long long int ev=0;
for(long long int e=0;e<ll.size()-1;e++)
{
long long int c,rk;
c=ll[e].first; rk=ll[e+1].second;
n+=c;
if(n>=1900 && rk==2)
{
	//cout<<n<<" "<<rk<<endl;
ev=-1;
break;
}
else if(n<1900 && rk==1)
{
ev=+1;
break;
}
}

return(ev);
}

long long inf = 1000*1000*1000+889;

int main()
{
long long int n;
cin>>n;
long long int sx=0;
for(int e=1;e<=n;e++)
{
  long long int a,b;
cin>>a>>b;
sx+=a;
ll.push_back(make_pair(a,b));
}
 
	//cout<<work(1901)<<endl;
 
 
long long int start=-inf;
long long int stop=inf;
long long int ans=-1;
//cout<<work(1842);
int kl=0;
while(start<=stop)
{  
long long int mid=start+ stop >> 1;;
//cout<<mid<<endl;
long long int s=work(mid);
//cout<<mid<<" "<<s<<endl;
if(s==0 || s==1)
{
	if(s==0)
{ans=mid;
kl=1;}
start=mid+1;

}
else
	stop=mid-1;



}
//cout<<ans<<endl;
if(kl==0)
	cout<<"Impossible";
else if(ans==inf)
	cout<<"Infinity";
else
	cout<<ans+sx;

//if(n==200000 && ll[0].second==2 && ll[0].first==100)
	//cout<<ans;

}