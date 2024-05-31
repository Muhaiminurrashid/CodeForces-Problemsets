
#include<bits/stdc++.h>
using namespace std;
int main(){
double per=0;
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
for(int i=0;i<n;i++){
   per += a[i];
}
per = per / (n);
cout<<fixed<<setprecision(12)<<per<<endl;

return 0;
}
