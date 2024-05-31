
#include<bits/stdc++.h>
using namespace std;
int main(){
int ch=0,t,m,n;
cin>>t;
for (int i=1;i<=t;i++){
    cin>>n>>m;
    if (m-n>=2)ch++;
}
cout<<ch<<endl;
return 0;
}
