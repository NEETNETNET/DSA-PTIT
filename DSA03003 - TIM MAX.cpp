#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fort(i,a,b) for(int i=a;i<b;++i)
#define forg(i,a,b) for(int i=a;i>b;--i)
#define fort1(i,a,b) for(int i=a;i<=b;++i)
#define forg1(i,a,b) for(int i=a;i>=b;--i)

ll mod = 1000000007;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		fort(i,0,n) cin >> a[i];
		sort(a,a+n);
		ll sum=0;
		fort(i,0,n){
			sum+=a[i]*i;
			sum%=mod;
		}cout << sum%mod << endl;
	}
}
