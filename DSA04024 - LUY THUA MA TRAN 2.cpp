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
ll mod = 1e9+7,n,p[11][11],k;
void matrix(ll a[11][11],ll b[11][11]){
	ll c[11][11]={0};
	fort(i,0,n) {
		fort(j,0,n){
			fort(l,0,n) c[i][j]+= a[i][l] * b[l][j] % mod;
		}
	}fort(i,0,n){
		fort(j,0,n) a[i][j]= c[i][j] % mod;
	}
}
void Pow(ll a[11][11],ll n){
	if(n==1) return;
	Pow(a,n/2);
	matrix(a,a);
	if(n&1) matrix(a,p);
	
}
int main(){
	t(){
		cin >> n >> k;
		ll a[11][11];
		fort(i,0,n){
			fort(j,0,n) {
				cin >> a[i][j];
				p[i][j]=a[i][j];
			}
		}
		Pow(a,k);
		ll res=0;
		fort(i,0,n){
			res+=a[i][n-1] % mod;
		}cout << res %mod << endl;
		
		
		
		
		
	}
	
	
	
	
	
	
}





