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

stack<vector<int>> s;
void Arr(int a[],int n){
	if(n>0){
		vector<int> v;
		fort(i,0,n) v.pb(a[i]);
		s.push(v);
		fort(i,0,n-1) a[i]+=a[i+1];
		Arr(a,n-1);
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		fort(i,0,n) cin >> a[i];
		Arr(a,n);
		while(!s.empty()){
			auto v = s.top();
			cout << '[';
			fort(i,0,v.size()-1) cout << v[i] << " ";
			cout << v[v.size()-1] << "] ";
			s.pop();
		}cout << endl;
	}
	


	
	
}

