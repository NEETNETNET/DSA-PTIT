#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fort(i,a,b) for(int i=a;i<b;++i)
#define forg(i,a,b) for(int i=a;i>b;--i)
#define fort1(i,a,b) for(int i=a;i<=b;++i)
#define forg1(i,a,b) for(int i=a;i>=b;--i)
#define t() int t; cin >> t; while(t--)
#define faster() cin.tie(0); ios_base::sync_with_stdio(false); cout.tie(0);

bool cmp(int a,int b){
	return a > b;
}
int main(){
	faster();
	int n;
	cin >> n;
	vector<int> v1,v2;
	fort(i,0,n){
		int x;
		cin >> x;
		if(i%2==0) v1.push_back(x);
		else v2.push_back(x);
	}sort(v1.begin(),v1.end());
	sort(v2.begin(),v2.end(),cmp);
	int k=0,j=0;
	fort(i,0,n){
		if(i%2==0) {
			cout << v1[k] << " ";
			++k;
		}else {
			cout << v2[j] << " ";
			++j;
		}
	}
		
		
	
	
	
}


