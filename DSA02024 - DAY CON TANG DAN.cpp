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


int a[1000],n;
vector<string> v;
void Try(int i,string s,int cnt){
	fort1(j,i+1,n){
		if(a[i]<a[j]){
			if(cnt > 0) v.pb(s+to_string(a[j])+" ");
			Try(j,s+to_string(a[j])+" ",cnt+1);
		}
	}
}
int main(){
	cin >> n ;
	fort1(i,1,n) cin >> a[i];
	Try(0,"",0);
	sort(v.begin(),v.end());
	for(auto x : v) cout << x << endl; 
	
}

