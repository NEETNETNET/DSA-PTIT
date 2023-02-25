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

ll f[100];

char Try(ll n,ll k){
	if(n==1) return 'A';
	if(n==2) return 'B';
	if(k<=f[n-2]) return Try(n-2,k);
	return Try(n-1,k-f[n-2]);
}
	
int main(){
	faster();
	f[1]=f[2]=1;
	fort1(i,3,93) f[i]=f[i-2]+f[i-1];
	t(){
		ll n,k;
		cin >> n >> k ;
		cout << Try(n,k) << endl;
		
	}
	
}


