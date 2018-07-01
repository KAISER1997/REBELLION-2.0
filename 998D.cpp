#include <bits/stdc++.h>
using namespace std;
typedef long long int intz;
vector<int > az;
vector<int> mult(vector<int>a1 ,vector<int >a2)
{
set<int >a3;
vector<int > a4;
for(int e=0;e<a1.size();e++)
{
for(int f=0;f<a2.size();f++)
{
	a3.insert(a1[e]+a2[f]);
}
}
for(set<int> ::iterator it=a3.begin();it!=a3.end();it++)
{
a4.push_back(*it);
}
return(a4);
}

vector<int> recur(int n)
{
if(n==1)
	return(az);

vector<int >a1=recur(n/2),a2;

a2=mult(a1,a1);
if(n%2==1)
a2=mult(a2,az);
return(a2);


}




int main()
{
int n;
az.push_back(1);az.push_back(5);az.push_back(10);az.push_back(50);
cin>>n;
 
if(n<=11)
{ vector<int > op=recur(n);
cout<<op.size();
}
else
{  vector<int > op=recur(11);
	cout<<((intz)49)*(intz)(n-11)+(op.size());

}



}
 

 