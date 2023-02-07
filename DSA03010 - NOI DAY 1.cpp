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
			m.erase(m.find(*m.begin()));
			ll y=*m.begin();
			m.erase(m.find(*m.begin()));
			sum+=x+y;
			m.insert(x+y);
		}cout << sum << endl;
	}
	
	
}
		
		
		
		
	
	
	
	
		
		
	
	
	







