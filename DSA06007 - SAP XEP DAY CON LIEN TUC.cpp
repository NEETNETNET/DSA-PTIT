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
		int a[n],b[n];
		fort(i,0,n) {
			cin >> a[i];
			b[i]=a[i];
		}
		sort(b,b+n);
		fort(i,0,n){
			if(a[i]!=b[i]) {
				cout << i+1 << " ";
				break;
			}
		}forg1(i,n-1,0){
			if(a[i]!=b[i]){
				cout << i+1 << endl;
				break;
			}
		}
		
		
	
	}
	
	
		
		
	
	
	
}



