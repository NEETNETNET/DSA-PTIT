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

int n,m,k,l,a[1001][1001],check[1001]={0},ok;
string res;
void dfs(int u,string s){
	check[u]=1;
	fort1(v,1,n){
		if(a[u][v]&&!check[v]) {
			if(v==l) {
				res=s+" "+ to_string(v);
				ok=0;
			}
			dfs(v,s+" "+to_string(v));
		}
	}
}
int main(){
	t(){
		fort1(i,1,n){
			fort1(j,1,n) a[i][j]=0;
		}memset(check,0,sizeof(check));
		cin >> n >> m >> k >> l;
		ok=1;
		while(m--){
			int x,y;
			cin >> x >> y;
			a[x][y]=1;
		}
		res="";
		dfs(k,to_string(k));
		if(ok) cout << -1 ;
		else cout << res;
		cout << endl;
		
		
	}
	
	
	
	
	
	
}




