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

int n,k,a[1000],b[1000];
vector<vector<int>> v;
int check(){
	int sum=0;
	fort1(i,1,n) {
		sum+=b[i]*a[i];
	}if(sum==k) return 1;
	return 0;
}
void Try(int i){
	fort1(j,0,1){
		a[i]=j;
		if(i==n){
			if(check()){
				vector<int> x;
				fort1(i,1,n){
					if(a[i]) x.pb(b[i]);
				}v.pb(x);
			}
		}else Try(i+1);
	}
}

int main(){
	t(){
		cin >> n >> k;
		fort1(i,1,n) cin >> b[i];
		sort(b,b+n+1);
		v.clear();
		Try(1);
		if(v.size()){
			forg1(i,v.size()-1,0){
				auto x = v[i];
				cout << '[';
				fort1(j,0,x.size()-2) cout << x[j] << " ";
				cout <<x[x.size()-1] << "] ";
			}cout << endl;	
		}else cout << -1 << endl;
		
	}
	


	
	
}

