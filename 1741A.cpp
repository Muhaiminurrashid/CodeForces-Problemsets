#include<bits/stdc++.h>
#define F first
#define S second
#define pb push_back
#define ll long long
#define sz(v) (int)v.size()
const char nl = '\n';
using namespace std;

void solve(){
	string a,b; cin>>a>>b;
	char a1=a.back();
	char b1=b.back();
	if (a1==b1){
		if (sz(a)==sz(b))cout<<'=';
		else if (a1=='S'){
			cout<<(sz(a)>sz(b) ? '<' : '>');
		}
		else cout<<(sz(a)>sz(b) ? '>' : '<');
	}
	else cout<<(a1 > b1 ? '<' : '>');
	cout<<nl;

	
}
int main(){
		ios::sync_with_stdio(0);
		cin.tie(0); 
		int tt; cin>>tt;
		while(tt--){
			solve();
		}
		
}