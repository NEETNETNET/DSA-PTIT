#include<bits/stdc++.h>

using namespace std;
#define t() int t; cin >> t; while(t--)

int n,a[1001][1001],m;
int check[1001];
void dfs(int u){
    check[u]=1;
    for(int v=1;v<=n;++v){
        if(a[u][v]&&!check[v]) dfs(v);  
    }
}
int main(){
	t(){
		cin >> n >> m ; 
		memset(check, 0, sizeof(check));
		for(int i=1;i<=n;++i){
			for(int j=1;j<=n;++j) a[i][j]=0;
		}
  		while(m--){
  			int x,y;
  			cin >> x >> y;
  			a[x][y]=1;
  			a[y][x]=1;
		}
		int test;
		cin >> test;
		while(test--){
			int k,l;
			cin >> k >> l;
			memset(check, 0, sizeof(check));
			dfs(k);
			if(check[l]) cout << "YES\n";
			else cout << "NO\n";
		}
	}
	
    
}

