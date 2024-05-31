#include<bits/stdc++.h>
using namespace std;
int main(){
long long c,t,bn,co,cost=0,need;
cin>>c>>t>>bn;
for(int i=1;i<=bn;i++){
         co=i*c;
         cost+=co;
}
need = cost - t;
if (cost<t)cout<<"0"<<endl;
else cout<<need<<endl;
return 0;
}
