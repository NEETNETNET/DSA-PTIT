#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fort(i,a,b) for(int i=a;i<b;++i)
#define forg(i,a,b) for(int i=a;i>b;--i)
#define fort1(i,a,b) for(int i=a;i<=b;++i)
#define forg1(i,a,b) for(int i=a;i>=b;--i)



int a[1000],n,t,k;
void in(){
	fort1(i,1,n) cout << a[i];
	cout << endl;
}
int check(){
	int cnt=0;
	fort1(i,1,n) {
		if(a[i]==1) ++cnt;
	}if(cnt==k) return 1;
	return 0;
}
void Try(int i){
	fort1(j,0,1){
		a[i]=j;
		if(i==n) {
			if(check()) in();
		}
		else Try(i+1);
	}
}
int main(){
	cin >> t;
	while(t--){
		cin >> n >> k;
		Try(1);
	}
}
