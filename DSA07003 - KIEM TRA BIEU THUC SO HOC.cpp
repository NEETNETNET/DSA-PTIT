#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fort(i,a,b) for(int i=a;i<b;++i)
#define forg(i,a,b) for(int i=a;i>b;--i)
#define fort1(i,a,b) for(int i=a;i<=b;++i)
#define forg1(i,a,b) for(int i=a;i>=b;--i)
#define t() int t; cin >> t; cin.ignore(); while(t--)
#define faster() cin.tie(0); ios_base::sync_with_stdio(false); cout.tie(0);
#define pb push_back


string check(string a){
	stack<char> s;
	fort(i,0,a.length()){
		if(a[i]==')'){
			int ok=1;	
			while(s.top()!='('){
				if(s.top()=='+'||s.top()=='-'||s.top()=='*'||s.top()=='/') ok=0;
				s.pop();
			}
			if(ok) return "Yes\n";
			s.pop();
		}else s.push(a[i]);
	}return "No\n";
}
int main(){
	t(){
		string s;
		getline(cin,s);
		cout << check(s);
	}
	
	
	
	
	
}




