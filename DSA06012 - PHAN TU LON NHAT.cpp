#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fort(i,a,b) for(int i=a;i<b;++i)
#define forg(i,a,b) for(int i=a;i>b;--i)
#define fort1(i,a,b) for(int i=a;i<=b;++i)
#define forg1(i,a,b) for(int i=a;i>=b;--i)
#define t() int t; cin >> t; while(t--)
#define faster() cin.tie(0); ios_base::sync_with_stdio(false); cout.tie(0);



int main(){
	faster();
	t(){
		int n,k;
		cin >> n >> k;
		int a[n];
		fort(i,0,n) cin >> a[i];
		sort(a,a+n);
		forg1(i,n-1,n-k) cout << a[i] << " ";
		cout << endl;  
	}
	
	
}