#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fort(i,a,b) for(ll i=a;i<b;++i)
#define forg(i,a,b) for(int i=a;i>b;--i)
#define fort1(i,a,b) for(int i=a;i<=b;++i)
#define forg1(i,a,b) for(int i=a;i>=b;--i)
#define t() int t; cin >> t; while(t--)
#define faster() cin.tie(0); ios_base::sync_with_stdio(false); cout.tie(0);



int main(){
	faster();
	t(){
		int n;
		cin >> n;
		ll a[n],res=1000001,sum;
		fort(i,0,n) cin >> a[i];
		fort(i,0,n-1){
			fort(j,i+1,n){
				if(res > abs(a[i]+a[j])){
					res = abs(a[i]+a[j]);
					sum = a[j] + a[i];
				}
			}
		}cout << sum << endl;
		
	}
	
	
}
