#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fort(i,a,b) for(int i=a;i<b;++i)
#define forg(i,a,b) for(int i=a;i>b;--i)
#define fort1(i,a,b) for(int i=a;i<=b;++i)
#define forg1(i,a,b) for(int i=a;i>=b;--i)


int a[1000],n,k;
void sinh(){
	int i=k;
	while(i>=1&&a[i]==n-k+i) --i;
	if(i==0){
		fort1(j,1,k) a[j]=j;
	}
	else {
		++a[i];
		fort1(j,i+1,k) a[j]=a[j-1]+1;	
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		fort1(i,1,k) cin >> a[i];
		sinh();
		fort1(i,1,k) cout << a[i] << " ";
		cout << endl;
	}
}
