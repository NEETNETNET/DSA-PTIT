#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fort(i,a,b) for(ll i=a;i<b;++i)
#define forg(i,a,b) for(ll i=a;i>b;--i)
#define fort1(i,a,b) for(ll i=a;i<=b;++i)
#define forg1(i,a,b) for(ll i=a;i>=b;--i)
#define t() int t; cin >> t; while(t--)
#define faster() cin.tie(0); ios_base::sync_with_stdio(false); cout.tie(0);
#define pb push_back
#define mod 1000000007

int main(){
	t(){
		ll n,sum=0;
		cin >> n ;
		vector<ll> v(n);
		fort(i,0,n) {
			cin >> v[i];
			sum+=v[i];
		}if(sum&1) cout << "NO\n";
		else {
			vector<ll> dp(n+1,0);
			v[0]=1;
			ll k = sum/2;
			fort(i,0,n){
				forg1(j,k,v[i]){
					if(dp[j-v[i]]) dp[j]=1;
				}
			}if(dp[k]) cout << "YES\n";
			else cout << "NO\n";
		}
		
		
		
		
	}
	
	
	
	
	
	
}





