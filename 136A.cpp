#include<bits/stdc++.h>
#define F first
#define S second
#define pb push_back
#define ll long long
const char nl = '\n';
#define sz(x) x.size()
#define all(x) x.begin(),x.end()
using namespace std;
void solve(){
    int n; cin>>n;
   vector<pair<int,int> >p;
    for(int i=1;i<=n;i++){
        int a; cin>>a;
        p.pb({a,i});
    }
    sort(all(p));
    for(auto it : p){

        cout<<it.S<<" ";
    }
    cout<<nl;


} 
int main(){
  
        ios::sync_with_stdio(0);
        cin.tie(0);
        
        /*int tt;
        cin>>tt;
       
        for(int t=1;t<=tt;t++){
            //cout<<"Case "<<t<<": "; */
          
            solve();
        //}
           
}