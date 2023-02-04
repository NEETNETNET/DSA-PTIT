#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
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
		int a[n];
		int b[1000001]={0};
		fort(i,0,n){
			cin >> a[i];
			++b[a[i]];
		}int res=0;
		fort(i,0,n){
			res=max(res,b[a[i]]);
		}if(res<=(n/2)) cout << "NO" << endl;
		else {
			fort(i,0,n){
				if(res==b[a[i]]) {
					cout << a[i] << endl;
					break;
				}
			}
		
		
		}
	}
	
	
}


