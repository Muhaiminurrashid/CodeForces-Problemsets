#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const char nl = '\n';
void solve(){
    int n; cin>>n;
    string s; cin>>s;
    int i=0;
    while(i < n){
       int start = i;
       cout<<s[i++];
       while(s[i++]!=s[start]);
    }
    cout<<nl;
}
int main(){
        ios::sync_with_stdio(0);
        cin.tie(0); cout.tie(0);
        int tt;
        cin>>tt;
        for(int t = 1;t<=tt;t++){
            solve();
        }
}