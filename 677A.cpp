#include<bits/stdc++.h>
using namespace std;
int main (){
int n,h;
cin>>n>>h;
vector <int> v;
int a,cnt=0;
for(int i=0;i<n;i++){
    cin>>a;
    v.push_back(a);
}
for (int i=0;i<n;i++){
    if (v[i]>h)cnt+=2;
    else cnt+=1;
}
cout<<cnt;

}
