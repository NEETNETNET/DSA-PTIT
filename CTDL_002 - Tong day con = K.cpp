#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fort(i,a,b) for(int i=a;i<b;++i)
#define forg(i,a,b) for(int i=a;i>b;--i)
#define fort1(i,a,b) for(int i=a;i<=b;++i)
#define forg1(i,a,b) for(int i=a;i>=b;--i)
int a[1000],n,ok,k,b[1000],cnt=0;
void in(){
	fort1(i,1,n) {
		if(a[i]) cout << b[i] << " ";
	}
	cout << endl; 
}
void kt(){
	fort1(i,1,n) a[i]=0;
}
void nhap(){
	fort1(i,1,n) cin >> b[i];
}
void sinh(){
	int i=n;
	while(i>=1&&a[i]==1){
		a[i]=0;
		--i;
	}if(i==0) ok=0;
	else a[i]=1;
}
int check(){
	int sum=0;
	fort1(i,1,n){
		sum+=a[i]*b[i];
	}if(sum!=k) return 0;
	return 1;
}
int main(){
	cin >> n >> k;
	kt();
	nhap();
	ok=1;
	while(ok){
		if(check()) {
			in();
			++cnt;
		}
		sinh();
	}cout << cnt;
}


