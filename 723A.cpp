#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,ans=0;
    vector<int>v;
    for(int i=0;i<3;i++){
        cin>>n;
        v.push_back(n);
    }
    sort(v.begin(),v.end());
    ans = ((v[1]-v[0]) + (v[2]-v[1]));
    cout<<ans<<endl;
}
