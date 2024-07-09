#include<bits/stdc++.h>
#define F first
#define S second
#define pb push_back
#define ll long long
const char nl = '\n';
using namespace std;

void solve(){
	int n; cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	int ans =0;
	for(int i=0;i<n/2;i++){
		ans += a[n-i-1] - a[i]; 
	}
	cout<<ans<<nl;

	
}
int main(){
		ios::sync_with_stdio(0);
		cin.tie(0); 
		int tt; cin>>tt;
		while(tt--){
			solve();
		}
		
}