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
	vector<int> v(n);
	fort(i,0,n) cin >> v[i];
	vector<int> l(n,1);
	fort1(i,1,n-1){
		fort1(j,0,i-1) {
			if(v[i] > v[j]) l[i]=max(l[i],l[j]+1);
		}
	}cout << *max_element(l.begin(),l.end());
	
	
	
	
	
	
}





