#include<bits/stdc++.h>
using namespace std;
int main(){
int a[]={0,9,5,79,7,0,3,6,8};
int n= sizeof(a) / sizeof(a[0]);
// int maxi = *max_element(a,a+n);
// int mini = *min_element(a,a+n);
// // cout<<mini<<endl;
// cout<<maxi<<endl;
sort(a,a+n,greater<int>());
for(int i =0;i<6;i++){
    cout<<a[i]<<" ";
}

    return 0;
}