#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fort(i,a,b) for(int i=a;i<b;++i)
#define forg(i,a,b) for(int i=a;i>b;--i)
#define fort1(i,a,b) for(int i=a;i<=b;++i)
#define forg1(i,a,b) for(int i=a;i>=b;--i)

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		forg1(i,s.length()-1,0){
			if(s[i]=='1') s[i]='0';
			else if(s[i]=='0'){
				s[i]='1';
				break;
			}
		}cout << s << endl;
	}
}
