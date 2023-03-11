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
	ll n,s;
	cin >> s >> n ;
	vector<ll> w(n+1);
	fort1(i,1,n) cin >> w[i];
	ll dp[n+1][s+1];
	memset(dp,0,sizeof(dp));
	fort1(i,1,n){
		fort1(j,1,s){
			dp[i][j]=dp[i-1][j];
			if(j>=w[i]) dp[i][j]=max(dp[i][j],dp[i-1][j-w[i]]+w[i]); 
		}
	}cout << dp[n][s] << endl;
		
		
		
		
	
	
	
	
	
	
	
}





