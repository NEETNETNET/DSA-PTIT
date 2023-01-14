#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fort(i,a,b) for(int i=a;i<b;++i)
#define forg(i,a,b) for(int i=a;i>b;--i)
#define fort1(i,a,b) for(int i=a;i<=b;++i)
#define forg1(i,a,b) for(int i=a;i>=b;--i)



int n,k,t,a[1000],cnt,b[1000];


void nhap(){
	fort1(i,1,k) {
		cin >> a[i];
		b[i]=a[i];
	}
}
void sinh(){
	int i=k;
	while(i>=1&&a[i]==n-k+i) --i;
	if(i!=0) {
		++a[i];
		fort1(j,i+1,n) a[j]=a[j-1]+1;
	} 
}
void cmp(){
	fort1(i,1,k){
		fort1(j,1,k){
			if(a[i]==b[j]) --cnt;
		}
	}
}
int main(){
	cin >> t;
	while(t--){
		cin >> n >> k;
		nhap();
		cnt=k;
		sinh();
		cmp();
		if(cnt) cout << cnt << endl;
		else cout << k << endl; 
	}
}
