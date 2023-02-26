#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fort(i,a,b) for(ll i=a;i<b;++i)
#define forg(i,a,b) for(int i=a;i>b;--i)
#define fort1(i,a,b) for(int i=a;i<=b;++i)
#define forg1(i,a,b) for(int i=a;i>=b;--i)
#define t() int t; cin >> t; while(t--)
#define faster() cin.tie(0); ios_base::sync_with_stdio(false); cout.tie(0);


ll check(ll a[],ll n,ll k){
	ll cnt=0;
	fort(i,0,n-2){
		fort(j,i+1,n-1){
			cnt+=lower_bound(a+j+1,a+n,k-a[i]-a[j])-(a+j+1);
		}
	}return cnt;
}
int main(){
	faster();
	t(){
		ll n,k;
		cin >> n >> k;
		ll a[n];
		fort(i,0,n) cin >> a[i];
		sort(a,a+n);
		cout << check(a,n,k) << endl ;
		
		
		
		
		
	}
	
	
}



