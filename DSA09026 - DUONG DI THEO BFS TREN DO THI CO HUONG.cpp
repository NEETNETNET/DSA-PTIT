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
void bfs(int u){
	queue<pair<int, string>> q;
	q.push({u,to_string(u)});
    check[u]=1;
    while(!q.empty()){
    	pair<int, string> s=q.front();
    	q.pop();
    	for(int v=1;v<=n;++v){
    		if(a[s.first][v]==1&&!check[v]){
    			check[v]=1;
    			if(v==l) {
    				ok=0;
    				res= s.second + " " + to_string(v);
				}q.push({v,s.second + " " + to_string(v)});
			}
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
		bfs(k);
		if(ok) cout << -1 ;
		else cout << res;
		cout << endl;
		
		
	}
	
	
	
	
	
	
}





