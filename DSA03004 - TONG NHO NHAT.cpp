#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fort(i,a,b) for(int i=a;i<b;++i)
#define forg(i,a,b) for(int i=a;i>b;--i)
#define fort1(i,a,b) for(int i=a;i<=b;++i)
#define forg1(i,a,b) for(int i=a;i>=b;--i)


int main(){
	int t;
	cin >> t;
	while(t--){
		int n ;
		cin >> n;
		int a[n];
		fort(i,0,n) cin >> a[i];
		sort(a,a+n);
		ll c=0,b=0;
		fort(i,0,n){
			if(i%2==0) {
				c=c*10+a[i];
			}else {
				b=b*10+a[i];
			}
		}cout << c+b <<endl;
	}
}
