#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fort(i,a,b) for(ll i=a;i<b;++i)
#define forg(i,a,b) for(int i=a;i>b;--i)
#define fort1(i,a,b) for(int i=a;i<=b;++i)
#define forg1(i,a,b) for(int i=a;i>=b;--i)
#define t() int t; cin >> t; while(t--)
#define pb push_back
#define faster() cin.tie(0); ios_base::sync_with_stdio(false); cout.tie(0);



char s,a[1000];
int check[1000]={0},n;
vector<char> v;
void in(){
	fort1(i,1,n) cout << a[i] ;
	cout << endl;
}
int test(){
	fort1(i,2,n-1) {
		if (a[i] == 'A' || a[i] == 'E') {
			if (a[i - 1] != 'A' && a[i - 1] != 'E' && a[i + 1] != 'A' && a[i + 1] != 'E')return 0;
		}
	}return 1;
}
void Try(int i){
	for(char j='A';j<=s;++j){
		if(!check[j]){
			a[i]=j;
			check[j]=1;
			if(i==n) {
				if(test()) in();
			}else Try(i+1);
			check[j]=0;
		}			
	}
	
}
int main(){
	cin >> s;
	for(char x='A';x<=s;++x) v.pb(x);
	n=v.size();
	Try(1);
}

