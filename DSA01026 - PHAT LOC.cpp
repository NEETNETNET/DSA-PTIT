#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fort(i,a,b) for(int i=a;i<b;++i)
#define forg(i,a,b) for(int i=a;i>b;--i)
#define fort1(i,a,b) for(int i=a;i<=b;++i)
#define forg1(i,a,b) for(int i=a;i>=b;--i)



int n;
char s[2]={'6','8'},a[1000];

void in(){
	fort1(i,1,n) cout << a[i];
	cout << endl;
}

int check(){
	if(a[1]!='8'||a[n]!='6') return 0;
	fort1(i,1,n) {
		if(a[i]=='8'&&a[i+1]=='8') return 0;
		if(a[i]=='6'&&a[i+1]=='6'&&a[i+2]=='6'&&a[i+3]=='6') return 0;
	}return 1;
	
}
void Try(int i){
	fort1(j,0,1){
		a[i]=s[j];
		if(i==n) {
			if(check()) in();	
		}
		else Try(i+1);
	}
}
int main(){
	cin >> n;
	Try(1);
		
	
}
