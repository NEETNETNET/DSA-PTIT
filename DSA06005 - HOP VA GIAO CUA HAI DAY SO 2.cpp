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
		int n,m;
		cin >> n >> m;	
		int a[n],b[m];
		set<int> s,x,y;
		fort(i,0,n) {
			cin >> a[i];
			s.insert(a[i]);
			x.insert(a[i]);
		}
		fort(i,0,m) {
			cin >> b[i];
			s.insert(b[i]);
			y.insert(b[i]);
		}
		for(auto x : s) cout << x << " ";
		cout << endl;
		for(auto i : x){
			if(y.count(i)) cout << i << " ";
		}cout << endl;
		
	}
	
	
}

