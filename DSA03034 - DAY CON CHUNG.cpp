#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fort(i,a,b) for(ll i=a;i<b;++i)
#define forg(i,a,b) for(int i=a;i>b;--i)
#define fort1(i,a,b) for(int i=a;i<=b;++i)
#define forg1(i,a,b) for(int i=a;i>=b;--i)
#define t() int t; cin >> t; while(t--)
#define faster() cin.tie(0); ios_base::sync_with_stdio(false); cout.tie(0);
#define pb push_back

int main(){
	faster();
	t(){
		ll n,m,k;
		cin >> n >> m >> k;
		ll a[n],b[m],c[k];
		multiset<ll> s1,s2;
		vector<ll> v;
		fort(i,0,n){
			cin >> a[i];
			s1.insert(a[i]);
		}fort(i,0,m){
			cin >> b[i];
			if(s1.count(b[i])){
				s2.insert(b[i]);
				s1.erase(s1.find(b[i]));	
			}
		}fort(i,0,k){
			cin >> c[i];
			if(s2.count(c[i])) {
				v.pb(c[i]);
				s2.erase(s2.find(c[i]));
			}
		}if(v.size()) {
			for(auto x : v) cout << x << " " ;
			cout << endl;
		}else cout << "NO" <<endl;
		
		
		
		
	}
	
	
}



