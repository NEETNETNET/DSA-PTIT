#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fort(i,a,b) for(ll i=a;i<b;++i)
#define forg(i,a,b) for(int i=a;i>b;--i)
#define fort1(i,a,b) for(int i=a;i<=b;++i)
#define forg1(i,a,b) for(int i=a;i>=b;--i)
#define t() int t; cin >> t; while(t--)
#define pb push_back
#define faster() cin.tie(0); ios_base::sync_with_stdio(false); cout.tie(0);



ll a[1000][1000],m,n;
ll gt(int n){
	if(n==0||n==1) return 1;
	return n*gt(n-1); 
}
int main(){
	t(){
		cin >> m >> n;
		fort(i,0,m){
			fort(j,0,n) cin >> a[i][j];
		}ll x=n+m-2,y=n-1;
		ll l = gt(x)/(gt(y)*gt(x-y)) ;
		cout << l << endl;
	}
	
	
}

