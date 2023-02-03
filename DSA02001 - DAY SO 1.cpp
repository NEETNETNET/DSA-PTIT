#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fort(i,a,b) for(int i=a;i<b;++i)
#define forg(i,a,b) for(int i=a;i>b;--i)
#define fort1(i,a,b) for(int i=a;i<=b;++i)
#define forg1(i,a,b) for(int i=a;i>=b;--i)
#define t() int t; cin >> t; while(t--)
#define faster() cin.tie(0); ios_base::sync_with_stdio(false); cout.tie(0);

void ql(int a[], int n)
{
    if (n>0) {
        
        cout << "[";
        fort(i,0,n-1)
            cout << a[i] << " ";
        cout << a[n-1] << "]" << endl;
        
        fort(i,0,n-1)
            a[i]=a[i]+a[i+1];
        ql(a,n-1);
    }
}

int main(){
	faster();
	t(){
		int n;
		cin >> n;
		int a[n];
		fort(i,0,n) cin >> a[i];
		ql(a,n);
		
	}
	
	
}
