#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fort(i,a,b) for(int i=a;i<b;++i)
#define forg(i,a,b) for(int i=a;i>b;--i)
#define fort1(i,a,b) for(int i=a;i<=b;++i)
#define forg1(i,a,b) for(int i=a;i>=b;--i)
#define t() int t; cin >> t; while(t--)
#define faster() cin.tie(0); ios_base::sync_with_stdio(false); cout.tie(0);
#define pb push_back

int main(){
	t(){
		string a,b;
		cin >> a >> b;
		a=' ' + a;
		b=' ' + b; 
		int n=a.length(),m=b.length();
		int f[n+1][m+1];
		fort1(i,0,n-1){
			fort1(j,0,m-1) {
				if(!i||!j) f[i][j]=0;
				else {
					if(a[i]==b[j]) f[i][j]=f[i-1][j-1] +1; 
					else {
						f[i][j]=max(f[i-1][j],f[i][j-1]);
					}
				}
			}
		}cout << f[n-1][m-1] << endl;
		
	}
	
	
	
	
	
	
}





