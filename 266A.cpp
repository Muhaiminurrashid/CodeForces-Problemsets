#include<bits/stdc++.h>
using namespace std;
int main(){
int n,cnt=0;
cin>>n;
char a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
for (int i=1;i<n;i++){
    if (a[i-1]==a[i])cnt++;
}
cout<<cnt<<endl;
}
