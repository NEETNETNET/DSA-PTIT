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
	int n;
	cin >> n;
	int a[n],m[n]={0},res=0;
	fort(i,0,n) {
		cin >> a[i];
		m[a[i]]=m[a[i]-1] + 1;
		res=max(res,m[a[i]]);
	}cout << n - res << endl;
		
		
		
		
		
		
	
	
	
}



