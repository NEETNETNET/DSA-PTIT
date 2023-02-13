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
		int n,k;
		cin >> n >> k;
		int a[n];
		fort(i,0,n) cin >> a[i];
		multiset<int> s;
		fort(i,0,k) s.insert(a[i]);
		cout << *s.rbegin() << " ";
		fort(i,k,n){
			s.erase(s.find(a[i-k]));
			s.insert(a[i]);
			cout << *s.rbegin() << " ";
		}cout << endl;
	}
	
	
	
}

