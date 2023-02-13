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

int a[1000],n,b[2]={6,8};
vector<vector<int>> v;
void Try(int i){
	fort1(j,0,1){
		a[i]=b[j];
		if(i==n) {
			vector<int> x;
			fort1(k,1,n) x.pb(a[k]);
			v.pb(x);	
		}
		else Try(i+1);
	}
}
int main(){
	faster();
	t(){
		int m ;
		cin >> m;
		v.clear();
		fort1(i,1,m){
			n=i;
			Try(1);
		}cout << v.size() << endl;
		forg1(i,v.size()-1,0){
			auto x=v[i];
			for(auto j : x) cout << j ;
			cout << " ";
		}cout << endl;
		
		
		
		
		
	}
	
	
}



