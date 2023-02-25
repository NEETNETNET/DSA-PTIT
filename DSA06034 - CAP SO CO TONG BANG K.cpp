#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fort(i,a,b) for(ll i=a;i<b;++i)
#define forg(i,a,b) for(int i=a;i>b;--i)
#define fort1(i,a,b) for(int i=a;i<=b;++i)
#define forg1(i,a,b) for(int i=a;i>=b;--i)
#define t() int t; cin >> t; while(t--)
#define pb push_back
#define faster() cin.tie(0); ios_base::sync_with_stdio(false); cout.tie(0);


int main(){
	faster();
	t(){
		ll n,k,cnt=0;
		cin >> n >> k ;
		ll a[n];
		map<ll,ll> m;
		fort(i,0,n){
			cin >> a[i];
			++m[a[i]];
		}fort(i,0,n){
			if(a[i]!=k-a[i]) {
				cnt+=m[k-a[i]];
				--m[a[i]];
			}else {
				--m[a[i]];
				cnt+=m[k-a[i]];
			}
		}cout << cnt << endl;
		
	}
	
}


