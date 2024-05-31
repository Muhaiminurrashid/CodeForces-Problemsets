#include<bits/stdc++.h>
using namespace std;
int main(){
    long int n,ac=0,dc=0;
    cin>>n;
    char a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if (a[i]=='A')ac++;
        else dc++;
    }
    if (ac>dc)cout<<"Anton"<<endl;
    else if (dc>ac)cout<<"Danik"<<endl;
    else cout<<"Friendship"<<endl;


    return 0;
}