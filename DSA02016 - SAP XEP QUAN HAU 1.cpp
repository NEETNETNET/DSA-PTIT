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



int doc[22]={0},cxuoi[22]={0},cnguoc[22]={0},cnt,n;
void Try(int i){
	fort1(j,1,n){
		if(doc[j]==0&&cxuoi[i-j+n]==0&&cnguoc[i+j-1]==0){
			doc[j]=cxuoi[i-j+n]=cnguoc[i+j-1]=1;
			if(i==n) ++cnt;
			else Try(i+1);
			doc[j]=cxuoi[i-j+n]=cnguoc[i+j-1]=0;
		}
	}
	
}
int main(){
	t(){
		cin >> n;
		cnt=0;
		Try(1);
		cout << cnt << endl;
	}
	
}

