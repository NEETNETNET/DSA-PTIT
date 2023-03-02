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


string check(string a){
	stack<string> s;
	forg1(i,a.length()-1,0){
		if(a[i]=='+'||a[i]=='-'||a[i]=='*'||a[i]=='/'){
			string b = s.top();
			s.pop();
			string c = s.top();
			s.pop();
			s.push(b+c+a[i]);			
		}
		else s.push(string(1,a[i])); 
	}return s.top();
}
int main(){
	t(){
		string s;
		cin >> s;
		cout << check(s) << endl;
	}
	
	
	
	
	
}




