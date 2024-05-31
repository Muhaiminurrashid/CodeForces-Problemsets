#include<bits/stdc++.h>
using namespace std;
int main(){
string a,b;
cin>>a;
transform(a.begin(),a.end(),a.begin(),::tolower);
for(int i=0;i<a.length();i++){
    if (a[i]!='a' && a[i]!='o' && a[i]!='i' && a[i]!='e' && a[i]!='u' && a[i]!='y'){
        b.push_back(a[i]);
    }
}
for(int i=0;i<b.length();i++){
    cout<<"."<<b[i];
}
cout<<endl;
return 0;
}
