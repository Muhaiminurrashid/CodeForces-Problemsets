#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
cin>>a;
cin>>b;
transform(a.begin(),a.end(),a.begin(), ::tolower);
transform(b.begin(),b.end(),b.begin(), ::tolower);

    if (a<b)cout<<"-1"<<endl;
    if (a>b)cout<<"1"<<endl;
    if (a==b) cout<<"0"<<endl;

    
    return 0;
}

