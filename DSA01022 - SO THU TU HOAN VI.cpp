#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fort(i,a,b) for(int i=a;i<b;++i)
#define forg(i,a,b) for(int i=a;i>b;--i)
#define fort1(i,a,b) for(int i=a;i<=b;++i)
#define forg1(i,a,b) for(int i=a;i>=b;--i)

int a[1000],n,b[1000],ok;
void ktao(){
	fort1(i,1,n) a[i]=i;
}
int so(){
	fort1(i,1,n){
		if(a[i]!=b[i]) return 0;	
	}return 1; 
}
void sinh(){
	int i=n-1;
	while(i>=1&&a[i]>a[i+1]) --i;
	if(i==0) ok=0;
	else {
		int j=n;
		while(a[j]<a[i]) --j;
		swap(a[i],a[j]);
		int l=i+1,r=n;
		while(l<r){
			swap(a[l],a[r]);
			++l,--r;
		}
	}
}
int main(){
	int t;
	cin >> t ;
	while(t--){
		cin >> n;
		fort1(i,1,n) cin >> b[i];
		ok=1;
		ll idx=1;
		ktao();
		while(ok&&so()==0){
			++idx;
			sinh();
		}cout << idx << endl;
		
	}
}

