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
	int n;
	cin >> n;
	int a[n+1][n+1];
	vector<int> v[1001];
	fort1(i,1,n){
		fort1(j,1,n) {
			cin >> a[i][j];
			if(a[i][j]) {
				v[i].pb(j);
			}
		}
	}fort1(i,1,n){
		for(auto x : v[i]) cout << x << " ";
		cout << endl;
	}
	
	
	
	
	
	
}




