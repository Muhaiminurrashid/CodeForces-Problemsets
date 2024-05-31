#include<iostream>
using namespace std;
void solve(){
    string a;
        cin>>a;
    
    int sum1=(a[0] + a[1] +  a[2]);
    int sum2= (a[3] + a[5] + a[4]);
    
    if (sum1 == sum2) {
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;


    }
int main(){
     int a[6];
     int t,i,j;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}