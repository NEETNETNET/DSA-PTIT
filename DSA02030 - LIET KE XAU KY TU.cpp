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


int n,k,a[1000];
vector<char> v;
char s;
void in(){
	fort1(i,1,k) cout << v[a[i]-1] ;
	cout << endl;
}
int check(){
	fort1(i,2,k) {
		if(a[i]<a[i-1]) return 0;
	}return 1;
}
void Try(int i){
	fort1(j,1,n){
		a[i]=j;
		if(i==k) {
			if(check()) in();
		}
		else Try(i+1);
	}
}
int main(){
	cin >> s >> k;
	for(char i='A';i<=s;++i) v.pb(i);
	n=v.size();
	a[0]=0;	
	Try(1);

	
	
}

