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

struct St{
	int n;
	int a[1000];
};
int main(){
	string key;
	St s;
	s.n=-1;
	int k;
	cin >> k;
	while(k--){
		cin >> key;
		if(key=="PUSH"){
			int t;
			cin >> t;
			++s.n;
			s.a[s.n]=t;
		}else if(key=="POP"){
			if(s.n!=-1) --s.n;
		}else if(key=="PRINT"){
			if(s.n==-1) cout << "NONE\n";
			else cout << s.a[s.n] << endl;
			
		}
	}
	
	
	
	
}

