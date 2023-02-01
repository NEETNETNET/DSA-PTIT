#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fort(i,a,b) for(int i=a;i<b;++i)
#define forg(i,a,b) for(int i=a;i>b;--i)
#define fort1(i,a,b) for(int i=a;i<=b;++i)
#define forg1(i,a,b) for(int i=a;i>=b;--i)

int n,a[10001],check[1000];
int b[10001];

void in(){
	fort1(i,1,n) cout << b[a[i]] << " ";
	cout << endl;
}
void ktao(){
	fort1(i,1,n) check[i]=1;
}
void Try(int i){
	fort1(j,1,n){
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
	cin >> n;
	fort1(i,1,n) cin >> b[i];
	sort(b+1,b+n+1);
	ktao();
	Try(1);
		
	
}

