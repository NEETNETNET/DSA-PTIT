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

ll mod = 1e9+7;

ll Pow(ll n,ll k){
	if(k==0) return 1;
	if(k==1) return n%mod;
	ll tmp=Pow(n,k/2);
	if(k & 1) return tmp%mod * tmp%mod * n%mod;
	return tmp%mod * tmp%mod;
}
int main(){
	
		
		while(1){
			ll n,k;
			cin >> n >> k;
			if(n!=0||k!=0) cout << Pow(n,k)%mod << endl;
			else if(n==0&&k==0) break;
		}
		
		
		
		
	
	


	
	
}
