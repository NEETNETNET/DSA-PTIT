#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fort(i,a,b) for(ll i=a;i<b;++i)
#define forg(i,a,b) for(int i=a;i>b;--i)
#define fort1(i,a,b) for(ll i=a;i<=b;++i)
#define forg1(i,a,b) for(int i=a;i>=b;--i)
#define t() int t; cin >> t; while(t--)
#define faster() cin.tie(0); ios_base::sync_with_stdio(false); cout.tie(0);
#define pb push_back
#define mod 1000000007

int main(){
	t(){
		ll n;
		cin >> n ;
		vector<ll> dp(n+1,0);
		dp[0]=dp[1]=1;
		ll k=3;
		fort1(i,2,n){
			fort1(j,0,min(i,k)) dp[i]+=dp[i-j]; 
		}cout << dp[n] << endl;;
		
		
		
	}
	
	
	
	
	
	
}





