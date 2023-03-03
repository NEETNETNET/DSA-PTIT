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
	int cnt=0;
	s.push(-1);
	fort(i,0,a.length()) {
		if(a[i]=='(') s.push(i);
		else {
			s.pop();
			if(s.size()) cnt=max(cnt,i-s.top()); // tinh chieu dai day con, dong thoi luu gia tri max
			else s.push(i); // them chi so ngay truoc day con, bat dau day con moi
		}
	}return cnt;
}

int main(){
	t(){
		string s;
		cin >> s;
		cout << check(s) << endl;
	}
	
	
	
	
	
	
}




