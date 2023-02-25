#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fort(i,a,b) for(int i=a;i<b;++i)
#define forg(i,a,b) for(int i=a;i>b;--i)
#define fort1(i,a,b) for(int i=a;i<=b;++i)
#define forg1(i,a,b) for(int i=a;i>=b;--i)
#define t() int t; cin >> t; while(t--)
#define pb push_back
#define faster() cin.tie(0); ios_base::sync_with_stdio(false); cout.tie(0);

int count(int x,int a[],int n,int b[]){
	if(!x) return 0;
	if(x==1) return b[0];
	int* i= upper_bound(a,a+n,x);
	int ans=(a+n)-i;
	ans+=(b[0]+b[1]);
	if(x==2) ans-= (b[3]+b[4]);
	if(x==3) ans+=b[2];
	return ans;
}
int count_pair(int a[],int b[],int n,int m){
	int c[5]={0};
	fort(i,0,m) {
		if(b[i]<5) ++c[b[i]];
	}sort(b,b+m);
	int cnt=0;
	fort(i,0,n){
		cnt+=count(a[i],b,m,c);
	}return cnt;
	
}
int main(){
	faster();
	t(){
		int n,m;
		cin >> n >> m;
		int a[n],b[m];
		fort(i,0,n) cin >> a[i];
		fort(j,0,m) cin >> b[j];
		cout << count_pair(a,b,n,m) << endl;
	}
	
}


