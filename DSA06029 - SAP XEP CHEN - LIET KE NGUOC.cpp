#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define pb push_back 
#define fort(i,a,b) for(int i=a;i<b;++i)
#define forg(i,a,b) for(int i=a;i>b;--i)
#define fort1(i,a,b) for(int i=a;i<=b;++i)
#define forg1(i,a,b) for(int i=a;i>=b;--i)
#define t() int t; cin >> t; while(t--)
#define faster() cin.tie(0); ios_base::sync_with_stdio(false); cout.tie(0);




int main(){
	faster();
	int n;
	cin >> n;
	int a[n];
	vector<vector<int>> v;
	fort(i,0,n) cin >> a[i];
	fort(i,1,n+1) {
		sort(a,a+i);
		vector<int> x;
		for (int j = 0; j < i; j++) x.pb(a[j]);
		v.pb(x);
	}int k=n;
	forg1(i,v.size()-1,0){
		cout << "Buoc " << i << ": ";
		fort(j,0,k) cout << v[i][j] << " ";
		--k;
		cout << endl;
	}
}
		
		
		
		
	
	
	
	
		
		
	
	
	







