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

int Max = 1000000;
int a[1000000]={0};
void sang(){
	a[0]=1;
	a[1]=1;
	for(int i=2;i*i<=Max;++i){
		if(!a[i]){
			for(int j=i*i;j<=Max;j+=i) a[j]=1;
		}
	}
}

int main(){
	faster();
	sang();
	t(){
		int n,ok=1;
		cin >> n;
		fort1(i,2,n/2){
			if(a[i]==0&&a[n-i]==0) {
				ok=0;
				cout << i << " " << n-i << endl;
				break;
			}
		}if(ok) cout << -1 << endl;
	}
	
}


