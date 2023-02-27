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
	faster();
	int n,m[1000][1000];
	memset(m, 0, sizeof(m));
	cin >> n ;
	cin.ignore();
	fort(i,1,n){
		string s;
		getline(cin,s);
		string a;
		stringstream ss(s);
		while(ss >> a){
			if(i<stoi(a)) m[i][stoi(a)]=1;
		}
	}fort1(i,1,n){
		fort1(j,1,n){
			if(m[i][j]==1) cout << i << " " << j << endl;
		}
	}
	
	
	
}




