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
	int n;
	cin >> n;
	int a[n];
	fort(i,0,n) cin >> a[i];
	int temp;
	vector<vector<int>> v;
	fort(i,0,n-1){
		temp=i;
		fort(j,i+1,n){
			if(a[temp] > a[j]) temp = j;
		}swap(a[temp],a[i]);
		vector<int> x;
		fort(j,0,n) x.pb(a[j]);
		v.pb(x);
	}forg1(i,v.size()-1,0){
		cout << "Buoc " << i+1 << ": ";
		fort(j,0,n) cout << v[i][j] << " ";
		cout << endl;
	}
	
}
		
		
		
		
	
	
	
	
		
		
	
	
	





