#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fort(i,a,b) for(int i=a;i<b;++i)
#define forg(i,a,b) for(int i=a;i>b;--i)
#define fort1(i,a,b) for(int i=a;i<=b;++i)
#define forg1(i,a,b) for(int i=a;i>=b;--i)
#define t() int t; cin >> t; while(t--)
#define faster() cin.tie(0); ios_base::sync_with_stdio(false); cout.tie(0);
#define pb push_back
#define mod 1000000007
int dp[1001][1001];
void change(){
	fort(i,0,1001){
		fort(j,0,1001){
			if(i==j||j==0) dp[i][j]=1;
			else dp[i][j]=dp[i-1][j-1] + dp[i-1][j];
			dp[i][j]%=mod;
		}
	}
}
int main(){
	change();
	t(){
		int n,k;
		cin >> n >> k;
		cout << dp[n][k] << endl;
		
		
	}
	
	
	
	
	
	
}





