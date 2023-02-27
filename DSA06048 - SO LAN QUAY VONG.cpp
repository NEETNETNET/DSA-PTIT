#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fort(i,a,b) for(ll i=a;i<b;++i)
#define forg(i,a,b) for(int i=a;i>b;--i)
#define fort1(i,a,b) for(int i=a;i<=b;++i)
#define forg1(i,a,b) for(ll i=a;i>=b;--i)
#define t() int t; cin >> t; while(t--)
#define faster() cin.tie(0); ios_base::sync_with_stdio(false); cout.tie(0);


ll quay(ll a[],ll n){
	fort(i,0,n-1){
		if(a[i] > a[i+1]) return i+1;
	}return 0;
}
int main(){
	faster();
	t(){
		ll n;
		cin >> n;
		ll a[n];
		fort(i,0,n) cin >> a[i];
		cout << quay(a,n) << endl;
	}
	
	
}



