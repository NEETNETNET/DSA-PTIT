#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fort(i,a,b) for(int i=a;i<b;++i)
#define forg(i,a,b) for(int i=a;i>b;--i)
#define fort1(i,a,b) for(int i=a;i<=b;++i)
#define forg1(i,a,b) for(int i=a;i>=b;--i)
#define t() int t; cin >> t; while(t--)
#define faster() cin.tie(0); ios_base::sync_with_stdio(false); cout.tie(0);
#define pb push_back

void in(int a[],int n){
	int res[n]={0};
	res[n-1]=-1;
	stack<int> s;
	s.push(a[n-1]);
	forg1(i,n-2,0){
		while(!s.empty()&&a[i]>=s.top()) s.pop();
		if(s.empty()) res[i] = -1;
		else res[i]=s.top();
		s.push(a[i]);
	}fort(i,0,n) cout << res[i] << " ";	
	cout << endl;
}
int main(){
	faster();
	t(){
		int n;
		cin >> n;
		int a[n];
		fort(i,0,n) cin >> a[i];
		in(a,n);
	}
	
	
	
	
}




