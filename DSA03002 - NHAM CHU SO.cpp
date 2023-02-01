#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fort(i,a,b) for(int i=a;i<b;++i)
#define forg(i,a,b) for(int i=a;i>b;--i)
#define fort1(i,a,b) for(int i=a;i<=b;++i)
#define forg1(i,a,b) for(int i=a;i>=b;--i)

ll ns(string a){
	ll s=0;
	fort(i,0,a.length()){
		if(a[i]=='5') a[i]='6';
		s=s*10 + a[i] - 48;
	}return s;
}
ll sn(string a){
	ll s=0;
	fort(i,0,a.length()){
		if(a[i]=='6') a[i]='5';
		s=s*10 + a[i] - 48;
	}return s;
}
int main(){
	ll a,b;
	cin >> a >> b;
	cout << sn(to_string(a)) + sn(to_string(b)) << " " << ns(to_string(a)) +  ns(to_string(b))  ;
		
	
}
