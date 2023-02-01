#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fort(i,a,b) for(int i=a;i<b;++i)
#define forg(i,a,b) for(int i=a;i>b;--i)
#define fort1(i,a,b) for(int i=a;i<=b;++i)
#define forg1(i,a,b) for(int i=a;i>=b;--i)

int a[10]={1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};

int main(){
	int t;
	cin >> t ;
	while(t--){
		int n;
		cin >> n;
		int i=9,cnt=0;
		while(n>0){
			if(n>=a[i]) {
				n-=a[i];
				++cnt;
			}
			else --i;
		}cout << cnt << endl;
	}
}

