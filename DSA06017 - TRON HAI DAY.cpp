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
		ll n,m;
		cin >> n >> m;
		ll a[n],b[m];
		multiset<ll> s;
		fort(i,0,n) {
			cin >> a[i];
			s.insert(a[i]);
		}
		fort(i,0,m) {
			cin >> b[i];
			s.insert(b[i]);
		}
		for(auto x : s) cout << x << " ";
		cout << endl;
	}
	
	
}
