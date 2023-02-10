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


int n,a[1000][1000];
vector<string> v;
void Try(int x,int y,string s){
	if(x==0&&y==0&&a[x][y]==0) return; // truong hop vi tri bat dau bang 0
	if(x==n-1&&y==n-1&&a[x][y]==1) {
		v.pb(s);
		return;
	}
	if(a[x+1][y]&&x<n-1) Try(x+1,y,s+"D");
	if(a[x][y+1]&&y<n-1) Try(x,y+1,s+"R");
	if(x>n-1||y>n-1||x<n-1&&y<n-1&&a[x+1][y]==0&&a[x][y+1]==0) return; 
	
}
int main(){
	t(){
		v.clear();	
		cin >> n;
		fort(i,0,n){
			fort(j,0,n) cin >> a[i][j];
		}int x=0,y=0;
		string s="";
		Try(x,y,s);
		if(v.size()){
			sort(v.begin(),v.end());
			for(auto x : v) cout << x <<  " ";
		}else cout << -1 ;
		cout << endl;
		
		
		
	}
	


	
	
}

