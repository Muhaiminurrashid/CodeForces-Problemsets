
#include<bits/stdc++.h>
using namespace std;
void solve (){
    long long a,b,cnt=0,div;
    cin>>a>>b;
    if  (a % b==0)cnt=0;
    else {

    if (a>b){
    div = a / b;
    cnt=b * (div + 1) - a;

    }
    else if (a<=b){
        cnt = b-a;    }
    }

    cout<<cnt<<endl;
}
int main(){
long long t;
cin>>t;
while(t--){
    solve();
}
return 0;
}
