#include<bits/stdc++.h>
using namespace std;
int main(){
string a,na,digu;
cin>>a;
for(int i=0;i<a.size();i++){
    if (a[i]!='+'){
        na.push_back(a[i]);
    }
}
sort(na.begin(),na.end());
cout<<na[0];
for(int i=1;i<na.length();i++){
    cout<<"+"<<na[i];
}

}
