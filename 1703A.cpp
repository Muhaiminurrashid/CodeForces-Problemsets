#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin>>s;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    if (s=="yes")cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
   
}
int main(){
    int n;
    cin>>n;
    while(n--){
        solve();
    }

}