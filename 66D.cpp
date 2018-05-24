#include<bits/stdc++.h>
using namespace std;
#include <bitset>  
int _sieve_size;  
bitset<1000001110> bs;  
vector<int> primes;  
void sieve(int  upperbound) {  
_sieve_size = upperbound + 1;  
bs.reset(); bs.flip();  
bs.set(0, false); bs.set(1, false);  
for (int  i = 2; i <= _sieve_size; i++) if (bs.test((size_t)i)) {
 for (int j = i * i; j <= _sieve_size; j += i) bs.set((size_t)j, false);
primes.push_back((int)i);  
}
}
int main()
{
sieve(1000);
//cout<<primes.size();

 int n;
 cin>>n;
 if(n>2)
 {
cout<<"6"<<endl<<"15"<<endl;
int ct[111];
ct[1]=2;
ct[2]=5;
long long int p=10;
for(int e=3;e<=n;e++)
{
	 
 p=p*2;
cout<<p<<endl;

}



 }
else
	cout<<"-1";



}