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

ll mod = 123456789;

ll Pow(ll n,ll k){
	if(k==0) return 1;
	if(k==1) return n%mod;
	ll tmp=Pow(n,k/2);
	if(k & 1) return tmp%mod * tmp%mod * n%mod;
	return tmp%mod * tmp%mod;
}
int main(){
	t(){
		ll n;
		cin >> n;
		cout << Pow(2,n-1) %mod << endl;
		
		
		
	}
	


	
	
}


