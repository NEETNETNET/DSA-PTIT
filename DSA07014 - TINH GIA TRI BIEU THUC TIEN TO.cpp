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


int check(string a){
	stack<int> s;
	forg1(i,a.length()-1,0){
		if(a[i]>='0'&&a[i]<='9') s.push(a[i]-'0');
		else {
			int b=s.top();
			s.pop();
			int c= s.top();
			s.pop();
			if(a[i]=='+') s.push(b+c);
			if(a[i]=='-') s.push(b-c);
			if(a[i]=='*') s.push(b*c);
			if(a[i]=='/') s.push(b/c);
		}
	}return s.top();
}
int main(){
	t(){
		string s;
		cin >> s;
		cout << check(s) << endl;
	}
	
	
	
	
	
}




