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
		int n;
		cin >> n;
		int a[n];
		fort(i,0,n) cin >> a[i];
		sort(a,a+n);
		if(a[0]==a[1]) cout << -1 << endl;
		else cout << a[0] << " " << a[1] <<  endl; 
		
	}
	
	
}
