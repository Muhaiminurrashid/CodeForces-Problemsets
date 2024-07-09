#include<bits/stdc++.h>
using namespace std;
void solve(){
    int a,b;
    cin>>a>>b;
    if (a<b)cout<<"no"<<endl;
    else {
        if (a%2 == b%2)cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }

}