#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fort(i,a,b) for(int i=a;i<b;++i)
#define forg(i,a,b) for(int i=a;i>b;--i)
#define fort1(i,a,b) for(int i=a;i<=b;++i)
#define forg1(i,a,b) for(int i=a;i>=b;--i)
int a[1000],n,k,t;
void in(){
	fort1(i,1,k) cout << a[i];
	cout << " ";
}
void Try(int i){
	fort1(j,a[i-1]+1,n-k+i){
		a[i]=j;
		if(i==k) in();
		else Try(i+1);
	} 
}
int main(){
	cin >> t;
	a[0]=0;
	while(t--){
		cin >> n >> k;
		Try(1);
		cout << endl;
	}

	
}

