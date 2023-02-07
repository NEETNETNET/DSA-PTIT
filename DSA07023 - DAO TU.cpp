#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define pb push_back 
#define fort(i,a,b) for(int i=a;i<b;++i)
#define forg(i,a,b) for(int i=a;i>b;--i)
#define fort1(i,a,b) for(int i=a;i<=b;++i)
#define forg1(i,a,b) for(int i=a;i>=b;--i)
#define t() int t; cin >> t; cin.ignore() ;while(t--)
#define faster() cin.tie(0); ios_base::sync_with_stdio(false); cout.tie(0);




int main(){
	faster();
	t(){
		string s;
		getline(cin,s);
		string tmp;
		stringstream ss(s);
		stack<string> st;
		while(ss >> tmp){
			st.push(tmp);
		}while(!st.empty()){
			cout << st.top() << " ";
			st.pop();
		}cout << endl;
	}
	
	
}
		
		
		
		
	
	
	
	
		
		
	
	
	






