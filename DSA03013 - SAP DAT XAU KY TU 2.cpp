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
		int d;
		string s;
		cin >> d >> s;
		int m[1000]={0},cnt=0;
		for(auto i : s) {
			++m[i];
			cnt=max(cnt,m[i]);
		}if((double)(cnt-1) <= (double)((s.length()-cnt)/(d-1))) cout << 1 << endl;
		else cout << -1 << endl;
		
		
		
		
		
	}
	
	
}



