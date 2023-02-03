#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fort(i,a,b) for(int i=a;i<b;++i)
#define forg(i,a,b) for(int i=a;i>b;--i)
#define fort1(i,a,b) for(int i=a;i<=b;++i)
#define forg1(i,a,b) for(int i=a;i>=b;--i)
#define t() int t; cin >> t; while(t--)
#define faster() cin.tie(0); ios_base::sync_with_stdio(false); cout.tie(0);

int n,k;
string a[35];
int b[35];
set<string> s;

void nhap(){
	fort1(i,1,n) {
		string x;
		cin >> x;
		s.insert(x);
	}
}
void in(){
	fort1(i,1,k) cout << a[b[i]]<< " ";
	cout << endl;
}
void Try(int i){
	fort1(j,b[i-1]+1,n-k+i){
		b[i]=j;
		if(i==k) in();
		else Try(i+1);
	}
}
int main(){
	faster();
	cin >> n >> k;
	nhap();
	int m=1;
	for(auto x : s) {
		a[m++] = x;
	}
	n=s.size();
	b[0]=0;
	Try(1);
	
	
}
