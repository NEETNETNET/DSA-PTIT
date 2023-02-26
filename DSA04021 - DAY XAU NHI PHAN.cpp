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

ll fb[100];
char Try(ll n,ll k){
	if(n==1) return '0';
	if(n==2) return '1';
	if(k<=fb[n-2]) return Try(n-2,k);
	return Try(n-1,k-fb[n-2]);
}
int main(){
	faster();
	fb[1]=fb[2]=1;
	fort1(i,3,93) fb[i]=fb[i-2]+fb[i-1]; 
	t(){
		ll n,k;
		cin >> n >> k;
		cout << Try(n,k) << endl;
	}
	
}


