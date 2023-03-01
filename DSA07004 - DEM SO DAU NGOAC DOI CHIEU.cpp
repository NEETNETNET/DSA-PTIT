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


ll check(string a){
	stack<char> s;
	ll cnt=0;
	fort(i,0,a.length()){
		if(a[i]==')'){
			if(s.empty()) {
				++cnt;
				s.push('(');
			}
			else s.pop();
		}else s.push(a[i]);
	}if(s.size()) cnt+=s.size()/2;
	return cnt;
}
int main(){
	t(){
		string s;
		cin >> s;
		cout << check(s) << endl;
	}
	
	
	
	
	
}




