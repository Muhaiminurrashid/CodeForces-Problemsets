#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
int n=s.length(),p=0;
for (int i=0;i<n/2;i++){
    if (s[i]!=s[n-1-i])p++;
}
if (p==1 || (p==0 && n%2==1))cout<<"YES\n";
else cout<<"NO\n";

}