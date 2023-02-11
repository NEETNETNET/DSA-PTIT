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


int n,a[1000][1000],ok[1000][1000];
vector<string> v;
void Try(int x,int y,string s){
	if(!a[n-1][n-1]&&!a[x][y]) return;
	if(x==n-1&&y==n-1) {
		v.pb(s);
	}
	if(a[x+1][y]&&x<n-1&&!ok[x+1][y]) {
		ok[x][y]=1;
		Try(x+1,y,s+"D");
		ok[x][y]=0;
	}
	if(a[x-1][y]&&x>0&&!ok[x-1][y]){
		ok[x][y]=1;
		Try(x-1,y,s+"U");
		ok[x][y]=0;
	} 
	if(a[x][y+1]&&y<n-1&&!ok[x][y+1]) {
		ok[x][y]=1;
		Try(x,y+1,s+"R");
		ok[x][y]=0;
	}
	if(a[x][y-1]&&y>0&&!ok[x][y-1]){
		ok[x][y]=1;
		Try(x,y-1,s+"L");
		ok[x][y]=0;
	} 
	
}
int main(){
	t(){
		v.clear();	
		cin >> n;
		fort(i,0,n){
			fort(j,0,n) cin >> a[i][j];
		}ok[n][n]={0};
		Try(0,0,"");
		if(v.size()){
			sort(v.begin(),v.end());
			for(auto x : v) cout << x <<  " ";
		}else cout << -1 ;
		cout << endl;
		
		
		
	}
	


	
	
}


