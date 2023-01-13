#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fort(i,a,b) for(int i=a;i<b;++i)
#define forg(i,a,b) for(int i=a;i>b;--i)
#define fort1(i,a,b) for(int i=a;i<=b;++i)
#define forg1(i,a,b) for(int i=a;i>=b;--i)
int a[1000],n,ok;
void in(){
	fort1(i,1,n) cout << a[i] << " ";
	cout << endl; 
}
void kt(){
	fort1(i,1,n) a[i]=0;
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
	int l=1,r=n;
	while(l<r){
		if(a[l]!=a[r]) return 0;
		l++;r--;
	}return 1;
}
int main(){
	cin >> n;
	kt();
	ok=1;
	while(ok){
		if(check()) in();
		sinh();
	}
}


