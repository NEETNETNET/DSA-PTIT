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
	t(){
		int n,k;
		cin >> n >> k;
		int a[k+1];
		if(k*9<n) cout << -1 << endl;
		else {
			n--;
			forg1(i,k,1){
				if(n>=9) {
					a[i]=9;
					n-=9;
				}
				else {
					if(i!=1) {
						a[i]=n;
						n=0; 
					}else a[i]=n+1;
				}
			}
			fort1(i,1,k) cout << a[i];
			cout << endl;
		
		}
		
		
		
	}
	
	
	
	
	
	
}




