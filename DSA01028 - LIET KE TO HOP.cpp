#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fort(i,a,b) for(int i=a;i<b;++i)
#define forg(i,a,b) for(int i=a;i>b;--i)
#define fort1(i,a,b) for(int i=a;i<=b;++i)
#define forg1(i,a,b) for(int i=a;i>=b;--i)

int a[1000],n,b[1000],ok,k,l;
set<int> s;
void ktao(){
	fort1(i,1,k) a[i]=i;
}
void sinh(){
	int i=k;
	while(i>=1&&a[i]==n-k+i) --i;
	if(i==0) ok=0;
	else {
		++a[i];
		fort1(j,i+1,k) a[j]=a[j-1]+1; 
	}
}
void in(){
	fort1(i,1,k) cout << b[a[i]] <<  " "; 
	cout << endl;
}
int main(){
	cin >> n >> k;
	fort1(i,1,n){
		int x;
		cin >> x;
		s.insert(x);
	}n=s.size();l=1;
	for(int x : s) {
		b[l++]=x;
	}
	ok=1;
	ktao();
	while(ok){
		in();
		sinh();
	}
		
	
}

