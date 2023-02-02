#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fort(i,a,b) for(int i=a;i<b;++i)
#define forg(i,a,b) for(int i=a;i>b;--i)
#define fort1(i,a,b) for(int i=a;i<=b;++i)
#define forg1(i,a,b) for(int i=a;i>=b;--i)


int main(){
	int t;
	cin >> t;
	while(t--){
		int n ;
		cin >> n;
		int a[n];
		fort(i,0,n) cin >> a[i];
		sort(a,a+n);
		int l=0,r=n-1;
		fort(i,0,n){
			if(i%2==0) {
				cout << a[r] << " ";
				--r;
			}else {
				cout << a[l] << " ";
				++l;
			}
		}cout << endl;
	}
}
