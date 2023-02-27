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


int main(){
	faster();
	t(){	
		int n,m;
		vector<int> v[1000];
		cin >> n >> m;
		while(m--){
			int x,y;
			cin >> x >> y;
			v[x].pb(y);
		}fort1(i,1,n){
			cout << i << ": ";
			for(auto x : v[i]) cout << x << " ";
			cout << endl;
		}
	}
	
	
}



