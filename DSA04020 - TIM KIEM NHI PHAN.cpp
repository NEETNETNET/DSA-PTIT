#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fort(i,a,b) for(int i=a;i<b;++i)
#define forg(i,a,b) for(int i=a;i>b;--i)
#define fort1(i,a,b) for(int i=a;i<=b;++i)
#define forg1(i,a,b) for(int i=a;i>=b;--i)
#define t() int t; cin >> t; while(t--)
#define pb push_back
#define faster() cin.tie(0); ios_base::sync_with_stdio(false); cout.tie(0);

ll bs(ll a[],ll n,ll k){
	ll l=0,r=n-1;
	while(l<=r){
		ll b=(r+l)/2;
		if(a[b]==k) return b+1;
		else if(a[b] < k) l=b+1;
		else r=b-1;
	}return -1;
}
int main(){
	t(){
		ll n,k;
		cin >> n >> k;
		ll a[n];
		fort(i,0,n) cin >> a[i];
		if(bs(a,n,k)==-1) cout << "NO" << endl;
		else cout << bs(a,n,k) << endl;
		
		
		
	}
	


	
	
}


