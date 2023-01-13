#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fort(i,a,b) for(int i=a;i<b;++i)
#define forg(i,a,b) for(int i=a;i>b;--i)
#define fort1(i,a,b) for(int i=a;i<=b;++i)
#define forg1(i,a,b) for(int i=a;i>=b;--i)
int a[1000],n,t,check[1000];
void in(){
	fort1(i,1,n) cout << a[i];
	cout << " ";
}
void kt(){
	fort1(i,1,n) check[i]=1;
}
void Try(int i){
	forg1(j,n,1){
		if(check[j]){
			a[i]=j;
			check[j]=0;
			if(i==n) in();
			else Try(i+1);
			check[j]=1;
		}
	
	} 
}
int main(){
	cin >> t;
	while(t--){
		cin >> n ;
		kt();
		Try(1);
		cout << endl;
	}

	
}

