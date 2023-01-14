#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fort(i,a,b) for(int i=a;i<b;++i)
#define forg(i,a,b) for(int i=a;i>b;--i)
#define fort1(i,a,b) for(int i=a;i<=b;++i)
#define forg1(i,a,b) for(int i=a;i>=b;--i)



int n,k,t,a[1000],ok;

void in(){
	fort1(i,1,k) cout << (char)(a[i]+64);
	cout << endl;
}
void kt(){
	fort1(i,1,k) a[i]=i;
}
void sinh(){
	int i=k;
	while(a[i]==n-k+i&&i>=1) --i;
	if(i==0) ok=0;
	else {
		++a[i];
		fort1(j,i+1,k) a[j]=a[j-1] + 1;
	}
}

int main(){
	cin >> t;
	while(t--){
		cin >> n >> k;
		ok=1;
		kt();
		while(ok){
			in();
			sinh();
		}
		
	}
		
	
}
