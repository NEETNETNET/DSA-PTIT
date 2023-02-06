#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define pb push_back 
#define fort(i,a,b) for(int i=a;i<b;++i)
#define forg(i,a,b) for(int i=a;i>b;--i)
#define fort1(i,a,b) for(int i=a;i<=b;++i)
#define forg1(i,a,b) for(int i=a;i>=b;--i)
#define t() int t; cin >> t; while(t--)
#define faster() cin.tie(0); ios_base::sync_with_stdio(false); cout.tie(0);

int n,k,a[105],b[105],cnt,ok;
int check(){
	fort1(i,2,k) {
		if(a[b[i]]<a[b[i-1]]) return 0; 
	}return 1;
}
void kt(){
	fort1(i,1,k) b[i]=i;
}
void sinh(){
	int i=k;
	while(i>=1&&b[i]==n-k+i) --i;
	if(i==0) ok=0;
	else {
		++b[i];
		fort1(j,i+1,k) b[j]=b[j-1]+1;
	}
}

int main(){
	faster();
	cin >> n >> k;
	fort1(i,1,n) cin >> a[i];
	b[0]=0;
	cnt=0;
	kt();
	ok=1;
	while(ok){
		if(check()) ++cnt;
		sinh();
	}
	cout << cnt ;
		
		
		
		
	
	
	
	
		
		
	
	
	
}




