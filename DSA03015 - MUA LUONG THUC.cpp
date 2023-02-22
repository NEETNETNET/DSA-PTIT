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
	faster();
	t(){
		int n,s,m;
		cin >> n >> s >> m;
		if(n<m||n*6-m*6<m) cout << -1 << endl;
		else {
			if((s*m) % n==0) cout << s*m / n << endl;
			else cout << (s*m/n) + 1 << endl;
		}
		
		
		
		
		
	}
	
	
}



