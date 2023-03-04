#include<bits/stdc++.h>

using namespace std;
#define t() int t; cin >> t; while(t--)

int n,a[1001][1001],m,k;
int check[1001];
void bfs(int u){
	queue<int> q;
	q.push(u);
    cout << u << " " ;
    check[u]=1;
    while(!q.empty()){
    	int s=q.front();
    	q.pop();
    	for(int v=1;v<=n;++v){
    		if(a[s][v]==1&&!check[v]){
    			cout << v << " ";
    			q.push(v);
    			check[v]=1;
			}
		}
	}
}
int main(){
	t(){
		cin >> n >> m >> k; 
		memset(check, 0, sizeof(check));
		for(int i=1;i<=n;++i){
			for(int j=1;j<=n;++j) a[i][j]=0;
		}
  		while(m--){
  			int x,y;
  			cin >> x >> y;
  			a[x][y]=1;
		}
		bfs(k);
		cout << endl;
	}
	
    
}

