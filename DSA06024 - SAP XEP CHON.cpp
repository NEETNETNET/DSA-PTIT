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
	fort(i,0,n-1){
		temp=i;
		fort(j,i+1,n){
			if(a[temp] > a[j]) temp = j;
		}swap(a[temp],a[i]);
		cout << "Buoc " << i+1 << ": ";
		fort(j,0,n) cout << a[j] << " ";
		cout << endl;
	}
	
}
		
		
		
		
	
	
	
	
		
		
	
	
	





