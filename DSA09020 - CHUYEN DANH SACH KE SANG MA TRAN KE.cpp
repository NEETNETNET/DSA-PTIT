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
	int n;
	cin >> n;
	cin.ignore();
	int a[n+1][n+1]={0};
	fort1(i,1,n){
		string s;
		getline(cin,s);
		stringstream ss(s);
		string b;
		while(ss >> b){
			a[i][stoi(b)]=1;
		}
	}fort1(i,1,n){
		fort1(j,1,n) cout << a[i][j] << " ";
		cout << endl;
	}
	
	
	
	
	
	
}




