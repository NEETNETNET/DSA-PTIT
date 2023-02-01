#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fort(i,a,b) for(int i=a;i<b;++i)
#define forg(i,a,b) for(int i=a;i>b;--i)
#define fort1(i,a,b) for(int i=a;i<=b;++i)
#define forg1(i,a,b) for(int i=a;i>=b;--i)

int a[1000],n,b[1000],ok,k;
void ktao(){
	fort1(i,1,k) a[i]=i;
}
int so(){
	fort1(i,1,k){
		if(a[i]!=b[i]) return 0;	
	}return 1; 
}
void sinh(){
	int i=k;
	while(i>=1&&a[i]==n-k+i) --i;
	if(i==0) ok=0;
	else {
		++a[i];
		fort1(j,i+1,k) a[j]=a[j-1]+1; 
	}
}
int main(){
	int t;
	cin >> t ;
	while(t--){
		cin >> n >> k;
		fort1(i,1,k) cin >> b[i];
		ok=1;
		ll idx=1;
		ktao();
		while(ok&&so()==0){
			++idx;
			sinh();
		}cout << idx << endl;
		
	}
}

