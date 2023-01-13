#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fort(i,a,b) for(int i=a;i<b;++i)
#define forg(i,a,b) for(int i=a;i>b;--i)
#define fort1(i,a,b) for(int i=a;i<=b;++i)
#define forg1(i,a,b) for(int i=a;i>=b;--i)



char a[1000];
int n,t;
void in(){
	fort1(i,1,n) cout << a[i];
	cout << " ";
}
void Try(int i){
	fort1(j,'A','B'){
		a[i]=j;
		if(i==n) in();
		else Try(i+1);
	}
}
int main(){
	cin >> t;
	while(t--){
		cin >> n;
		Try(1);
		cout << endl;
	}
}
