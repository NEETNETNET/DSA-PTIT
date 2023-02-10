#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fort(i,a,b) for(ll i=a;i<b;++i)
#define forg(i,a,b) for(int i=a;i>b;--i)
#define fort1(i,a,b) for(int i=a;i<=b;++i)
#define forg1(i,a,b) for(int i=a;i>=b;--i)
#define t() int t; cin >> t; while(t--)
#define pb push_back
#define faster() cin.tie(0); ios_base::sync_with_stdio(false); cout.tie(0);



int a[1000],b[2]={0,2};
void in(){
	fort1(i,1,2) cout << a[i] ;
	cout << '/';
	fort1(i,3,4) cout << a[i];
	cout << '/';
	fort1(i,5,8) cout << a[i]; 
	cout << endl;
}
int ngay(){
	int sum=0;
	fort1(i,1,2) sum=sum*10+a[i];
	if(sum>=2) return 1;
	return 0; 
}
int thang(){
	int sum=0;
	fort1(i,3,4) sum=sum*10+a[i];
	if(sum==2) return 1;
	return 0; 
}
int nam(){
	int sum=0;
	fort1(i,5,8) sum=sum*10+a[i];
	if(sum>=2000) return 1;
	return 0; 
}
void Try(int i){
	fort1(j,0,1){
		a[i]=b[j];
		if(i==8) {
			if(ngay()&&thang()&&nam()) in();
		}
		else Try(i+1);
	}
	
}
int main(){
	Try(1);
}

