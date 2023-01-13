#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fort(i,a,b) for(int i=a;i<b;++i)
#define forg(i,a,b) for(int i=a;i>b;--i)
#define fort1(i,a,b) for(int i=a;i<=b;++i)
#define forg1(i,a,b) for(int i=a;i>=b;--i)


//int a[1000],n;
//void sinh(){
//	int i=n;
//	while(i>=1&&a[i]>a[i+1]) --i;
//	if(i==0){
//		fort1(j,1,n) a[j]=j;
//	}
//	else {
//		int j=n;
//		while(a[j]<a[i]) --j;
//		swap(a[i],a[j]);
//		int l=i+1,r=n;
//		while(l<r) {
//			swap(a[l],a[r]);
//			l++,r--;
//		}
//	}
//}
//int main(){
//	int t;
//	cin >> t;
//	while(t--){
//		cin >> n ;
//		fort1(i,1,n) cin >> a[i];
//		sinh();
//		fort1(i,1,n) cout << a[i] << " ";
//		cout << endl;
//	}
//}
int a[1000],n,t;
int main(){
	cin >> t;
	while(t--){
		cin >> n;
		fort(i,0,n) cin >> a[i];
		next_permutation(a,a+n);
		fort(i,0,n) cout << a[i] << " ";
		cout << endl;
	}
}
