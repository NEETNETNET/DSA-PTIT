#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fort(i,a,b) for(ll i=a;i<b;++i)
#define forg(i,a,b) for(int i=a;i>b;--i)
#define fort1(i,a,b) for(int i=a;i<=b;++i)
#define forg1(i,a,b) for(ll i=a;i>=b;--i)
#define t() int t; cin >> t; while(t--)
#define faster() cin.tie(0); ios_base::sync_with_stdio(false); cout.tie(0);


string check(ll a[],ll n){
	forg1(i,n-1,2){
		ll l=0,r=i-1;
		while(l<r){
			if(a[l]+a[r] == a[i]) return "YES\n";
			if(a[l]+a[r] < a[i]) ++l;
			else --r;
		}
	}return "NO\n";
}
int main(){
	faster();
	t(){
		ll n;
		cin >> n;
		ll a[n];
		fort(i,0,n) {
			cin >> a[i];
			a[i]*=a[i];
		}
		sort(a,a+n);
		cout << check(a,n);
		
		
		
		
		
		
	}
	
	
}



