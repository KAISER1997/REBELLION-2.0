#include <bits/stdc++.h>
using namespace std;
typedef complex<double> base;

 vector<int >ans;
double PI=acos(-1);
void fft (vector<base> & a, bool invert) {
	int n = (int) a.size();
	if (n == 1)  return;
 
	vector<base> a0 (n/2),  a1 (n/2);
	for (int i=0, j=0; i<n; i+=2, ++j) {
		a0[j] = a[i];
		a1[j] = a[i+1];
	}
	fft (a0, invert);
	fft (a1, invert);
 
	double ang = 2*PI/n * (invert ? -1 : 1);
	base w (1),  wn (cos(ang), sin(ang));
	for (int i=0; i<n/2; ++i) {
		a[i] = a0[i] + w * a1[i];
		a[i+n/2] = a0[i] - w * a1[i];
		if (invert)
			a[i] /= 2,  a[i+n/2] /= 2;
		w *= wn;
	}
}

void multiply (const vector<int> & a, const vector<int> & b ) {
	vector<base> fa (a.begin(), a.end()),  fb (b.begin(), b.end());
	size_t n = 1;
	while (n < max (a.size(), b.size()))  n <<= 1;
	n <<= 1;
	fa.resize (n),  fb.resize (n);
 
	fft (fa, false),  fft (fb, false);
	for (size_t i=0; i<n; ++i)
		fa[i] *= fb[i];
	fft (fa, true);
 
	int y;
	for (size_t i=0; i<n; ++i)
		{
			y = int (fa[i].real() + 0.5);
			ans.push_back(y);//ANSWER
			//cout<<y<<endl;
		}
}

int main()
{

int n,t=0;
while(cin>>n)
{
 ans.clear();
vector<int >ll;
int mx=-1;
for(int r=0;r<n;r++)
{
	int g;
	cin>>g;
	ll.push_back(g);
	mx=max(mx,g);
 
}
 vector<int > a(mx+1),b(mx+1);
 a[0]=1;
 b[0]=1;
for(int r=0;r<n;r++)
{
	 a[ll[r]]=1;
	 b[ll[r]]=1;
 
}




multiply(a,b);
int m;
cin>>m;
int tot=0;
for(int e=0;e<m ;e++)
{
int h;
cin>>h;
if(ans[h]!=0 && h<ans.size())
	++tot;


}
cout<<tot<<endl;


}
}