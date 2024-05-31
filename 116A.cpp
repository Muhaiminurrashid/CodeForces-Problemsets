#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n],total[n],in[n],out[n];

    for (int i=0;i<n;i++){
    cin>>out[i]>>in[i];
    }
    total[0]=in[0];
    for(int i=1;i<n;i++){

        total[i]=total[i-1]+in[i]-out[i];
    }
    sort (total,total+n,greater<int>());
    cout<<total[0]<<endl;


return 0;
}
