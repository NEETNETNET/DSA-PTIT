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
	t(){
		int n;
		cin >> n;
		int a[n],ok=1,ok1=0;
		fort(i,0,n) cin >> a[i];
		fort(i,0,n-1){
			fort(j,i+1,n){
				if(a[i]==a[j]) {
					cout << a[i] << endl;
					ok=0;
					ok1=1;
				}
			}if(ok1) {
				ok1=0;
				break;
			}
		}if(ok) cout << "NO" << endl;
		
	
	}
	
	
		
		
	
	
	
}



