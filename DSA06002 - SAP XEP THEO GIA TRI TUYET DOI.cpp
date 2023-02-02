#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fort(i,a,b) for(int i=a;i<b;++i)
#define forg(i,a,b) for(int i=a;i>b;--i)
#define fort1(i,a,b) for(int i=a;i<=b;++i)
#define forg1(i,a,b) for(int i=a;i>=b;--i)
#define t() int t; cin >> t; while(t--)
#define faster() cin.tie(0); ios_base::sync_with_stdio(false); cout.tie(0);

int x;
bool cmp(int a,int b){
	return abs(a-x) < abs(b-x);
}
int main(){
	faster();
	t(){
		int n;
		cin >> n >> x;	
		int a[n];
		fort(i,0,n) cin >> a[i];
		stable_sort(a,a+n,cmp);
		fort(i,0,n) cout << a[i] << " ";
		cout << endl;
		
	}
	
	
}
