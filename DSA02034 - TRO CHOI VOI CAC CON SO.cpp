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

int a[1000],n,check[1000]={0};
void in(){
	fort1(i,1,n) cout << a[i] ;
	cout << endl;
}
int test(){
	fort1(i,2,n) {
		if(abs(a[i]-a[i-1])==1) return 0; 
	}return 1;
}
void Try(int i){
	fort1(j,1,n) {
		if(!check[j]){
			a[i]=j;
			check[j]=1;
			if(i==n){
				if(test()) in();
			}else Try(i+1);
			check[j]=0;
		} 
	}	
}

int main(){
	faster();
	t(){
		cin >> n;
		Try(1);
	}
	
	
}
		
		
		
		
	
	
	
	
		
		
	
	
	








