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
	int n;
	cin >> n;
	deque<int> q;
	while(n--){
		string a;
		cin >> a;
		if(a=="PUSHFRONT") {
			int x;
			cin >> x;
			q.push_front(x);
		}if(a=="PRINTFRONT"){
			if(q.size()) cout << q.front() << endl;
			else cout << "NONE" << endl;
		}if(a=="POPFRONT") {
			if(q.size()) q.pop_front();
		}if(a=="PUSHBACK"){
			int x;
			cin >> x;
			q.push_back(x);
		}if(a=="PRINTBACK"){
			if(q.size()) cout << q.back() << endl;
			else cout << "NONE" << endl;
		}if(a=="POPBACK"){
			if(q.size()) q.pop_back();
		}
	}
	
	
	
	
	
}




