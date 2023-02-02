#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fort(i,a,b) for(int i=a;i<b;++i)
#define forg(i,a,b) for(int i=a;i>b;--i)
#define fort1(i,a,b) for(int i=a;i<=b;++i)
#define forg1(i,a,b) for(int i=a;i>=b;--i)


int main(){
	int n;
	cin >> n;
	int a[n];
	fort(i,0,n) cin >> a[i];
	sort(a,a+n);
	int b = a[0] *a[1];
	int c = a[n-1] * a[n-2];
	int d = b * a[n-1]  ;
	int e= c * a[n-3];
	cout << max(c,max(d,max(e,b)));
	
}
