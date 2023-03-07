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

int main(){
	t(){
		int n;
		cin >> n;
		vector<int> v(n);
		vector<int> dp(n,1);
		fort(i,0,n) cin >> v[i];
		fort1(i,1,n-1){
			fort1(j,0,i-1) {
				if(v[i]>=v[j]) dp[i]=max(dp[i],dp[j]+1); 
			}
		}cout << n- *max_element(dp.begin(),dp.end()) << endl;;
		
		
		
	}
	
	
	
	
	
	
}





