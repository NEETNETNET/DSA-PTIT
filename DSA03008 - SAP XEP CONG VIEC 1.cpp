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

struct gio{
	int s,f;
};
bool cmp(gio a,gio b){
	if(a.f<b.f) return true;
	if(a.f==b.f&&a.s<b.s) return true;
	return false;
}
int main(){
	faster()
	t(){
		int n,cnt=1,j=0;
		cin >> n;
		gio a[n];
		fort(i,0,n) cin >> a[i].s;
		fort(i,0,n) cin >> a[i].f;
		sort(a,a+n,cmp);
		fort(i,1,n){
			if(a[i].s>=a[j].f) {
				++cnt;
				j=i;
			}
		}cout << cnt << endl;
		
		
		
	}
	


	
	
}



