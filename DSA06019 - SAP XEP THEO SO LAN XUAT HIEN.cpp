#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fort(i,a,b) for(int i=a;i<b;++i)
#define forg(i,a,b) for(int i=a;i>b;--i)
#define fort1(i,a,b) for(int i=a;i<=b;++i)
#define forg1(i,a,b) for(int i=a;i>=b;--i)
#define t() int t; cin >> t; while(t--)
#define faster() cin.tie(0); ios_base::sync_with_stdio(false); cout.tie(0);

struct w{
	int k,l;
};
bool cmp(w a,w b){
	if(a.l>b.l) return true;
	if(a.l==b.l&&a.k<b.k) return true;
	return false;
}
int main(){
	faster();
	t(){
		int n;
		cin >> n;
		w a[n];
		fort(i,0,n){
			cin >> a[i].k;
			a[i].l=0;
		}fort(i,0,n){
			fort(j,0,n){
				if(a[i].k==a[j].k) ++a[i].l;
			}
		}
		sort(a,a+n,cmp);
		fort(i,0,n) cout << a[i].k << " ";
		cout << endl;
		
		
	}
	
	
}


