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

int main(){
	t(){
		int n, s;
		cin >> n >> s;
		vector<int> a(n);
		vector<int> dp(s+1,0);
		fort(i,0,n) cin >> a[i];
		dp[0]=1;
		fort(i,0,n){
			forg1(j,s,a[i]){
				if(dp[j-a[i]]) dp[j]=1;
			}
		}if(dp[s]) cout << "YES\n";
		else cout << "NO\n";
		
		
	}
	
	
	
	
	
	
}





