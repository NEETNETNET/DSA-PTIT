#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fort(i,a,b) for(int i=a;i<b;++i)
#define forg(i,a,b) for(int i=a;i>b;--i)
#define fort1(i,a,b) for(int i=a;i<=b;++i)
#define forg1(i,a,b) for(int i=a;i>=b;--i)



int t;
string s;
void sinh(){
	forg1(i,s.length()-1,0){
		if(s[i]=='1') {
			s[i]='0';
			break;
		}else if(s[i]=='0') s[i]='1';
	}
}

int main(){
	cin >> t;
	while(t--){
		cin >> s;
		sinh();
		cout << s << endl;
	}
}
