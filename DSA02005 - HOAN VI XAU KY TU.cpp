#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define pb push_back 
#define fort(i,a,b) for(int i=a;i<b;++i)
#define forg(i,a,b) for(int i=a;i>b;--i)
#define fort1(i,a,b) for(int i=a;i<=b;++i)
#define forg1(i,a,b) for(int i=a;i>=b;--i)
#define t() int t; cin >> t; while(t--)
#define faster() cin.tie(0); ios_base::sync_with_stdio(false); cout.tie(0);

int a[15],check[15],n;
string s;
char b[15];
void in(){
	fort1(i,1,n) cout <<b[a[i]] ;
	cout << " " ;
}
void kt(){
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
	faster();
	t(){
		cin >> s;
		n=s.length();
		fort(i,0,n){
			b[i+1]=s[i];
		}
		kt();
		Try(1);
		cout << endl;
	}
		
		
		
		
	
	
	
	
		
		
	
	
	
}




