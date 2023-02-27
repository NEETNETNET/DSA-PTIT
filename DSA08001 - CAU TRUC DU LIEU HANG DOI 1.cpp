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
	faster();
	t(){
		int n;
		cin >> n;
		queue<int> q;
		while(n--){
			int a;
			cin >> a;
			if(a==1) cout << q.size() << endl;
			if(a==2){
				if(!q.size()) cout << "YES\n";
				else cout << "NO\n"; 
			}if(a==3){
				int x;
				cin >> x;
				q.push(x);
			}if(a==4){
				if(q.size()) q.pop();
			}if(a==5){
				if(q.size()) cout << q.front() << endl;
				else cout << -1 << endl;
			}if(a==6){
				if(q.size()) cout << q.back() << endl;
				else cout << -1 << endl;
			}
		}
	}
	
	
	
	
}




