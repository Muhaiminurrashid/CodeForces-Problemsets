#include<iostream>
using namespace std;
int main(){
    long long t,n,i,j;
    cin>>t;
    for(j=1;j<=t;j++){
    cin>>n;
    int count=0;
    for(i=3;i<=n;i+=2){
        if (n % i == 0){
            count=1;
        }
    }
    if(count==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
    




    return 0;
}