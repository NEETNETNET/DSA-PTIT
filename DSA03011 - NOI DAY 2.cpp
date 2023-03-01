#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define pb push_back 
#define fort(i,a,b) for(int i=a;i<b;++i)
#define forg(i,a,b) for(int i=a;i>b;--i)
#define fort1(i,a,b) for(int i=a;i<=b;++i)
#define forg1(i,a,b) for(int i=a;i>=b;--i)
#define t() int t; cin >> t; while(t--)
#define faster() cin.tie(0); ios_base::sync_with_stdio(false); cout.tie(0);


ll mod = 1e9+7;
int main(){
	
	t(){
		ll n;
		cin >> n;
		ll a[n];
		multiset<ll> m;
		fort(i,0,n) {
			cin >> a[i];
			m.insert(a[i]);
		}ll sum=0;
		while(m.size()!=1){
			ll x=*m.begin();
			m.erase(m.begin());
			ll y=*m.begin();
			m.erase(m.begin());
			sum+=(x%mod + y%mod)%mod;
			sum%=mod;
			m.insert((x%mod + y%mod)%mod);
		}cout << sum << endl;
	}
	
	
}
		
