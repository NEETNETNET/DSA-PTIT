#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define pb push_back 
#define fort(i,a,b) for(int i=a;i<b;++i)
#define forg(i,a,b) for(int i=a;i>b;--i)
#define fort1(i,a,b) for(int i=a;i<=b;++i)
#define forg1(i,a,b) for(int i=a;i>=b;--i)
#define t() int t; cin >> t; while(t--)
#define faster() cin.tie(0); ios_base::sync_with_stdio(false); cout.tie(0);



int main(){
	
	t(){
		string s;
		cin >> s;
		map<char,int> mp;
		fort(i,0,s.length()-1){
			mp[s[i]]++;
		}int res=0;
		for(auto x : mp) {
			res=max(res,x.second);
		}if(s.length()-res>=res-1) cout << 1 << endl;
		else cout << -1 << endl;
		
	}
	
	
}
		
		
		
		
	
	
	
	
		
		
	
	
	







