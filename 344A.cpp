#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,x=0;
    cin>>n;
    string s;
    vector <string>v;
    for(int i=0;i<n;i++){
       cin>>s;
       v.push_back(s);
    }
    for (int i=0;i<n;i++){
        if (v[i]!=v[i+1])
            x++;
    }
    cout<<x<<endl;
}
