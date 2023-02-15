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


void Try(int n,char nguon,char trungGian,char dich){
	if(n==1) cout << nguon << " -> " << dich << endl;
	else {
		Try(n-1,nguon,dich,trungGian);
		Try(1,nguon,trungGian,dich);
		Try(n-1,trungGian,nguon,dich);
	} 
}

int main(){
	int n;
	cin >> n;
	Try(n,'A','B','C');


	
	
}


