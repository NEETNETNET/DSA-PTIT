#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fort(i,a,b) for(ll i=a;i<b;++i)
#define forg(i,a,b) for(int i=a;i>b;--i)
#define fort1(i,a,b) for(int i=a;i<=b;++i)
#define forg1(i,a,b) for(ll i=a;i>=b;--i)
#define t() int t; cin >> t; while(t--)
#define faster() cin.tie(0); ios_base::sync_with_stdio(false); cout.tie(0);


bool cmp(ll a, ll b){
	return a > b;
}
int main(){
	faster();
	t(){
		ll n,sum=0;
		cin >> n;
		ll a[n],b[n];
		fort(i,0,n) cin >> a[i];
		fort(i,0,n) cin >> b[i];
		sort(a,a+n);
		sort(b,b+n,cmp);
		fort(i,0,n) sum+=a[i]*b[i];
		cout << sum << endl;
	}
	
	
}



