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
		int a[n],sum=0,sum1=0,ok=1;
		fort(i,0,n) {
			cin >> a[i];
			sum+=a[i];
		}
		fort(i,1,n){
			sum1+=a[i-1];
			if(sum-sum1-a[i]==sum1) {
				ok=0;
				cout << i + 1 << endl;
				break;
			}
		}if(ok) cout << -1 << endl;
		
	
	}
	
	
		
		
	
	
	
}



