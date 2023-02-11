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


int main(){
	faster()
	t(){
		ll n;
		cin >> n;
		ll a[n],b[n-1];
		fort(i,0,n) cin >> a[i];
		fort(i,0,n-1) cin >> b[i];
		fort(i,0,n){
			if(a[i]!=b[i]) {
				cout << i+1 << endl;
				break;
			}
		}
		
		
		
		
	}
	


	
	
}



