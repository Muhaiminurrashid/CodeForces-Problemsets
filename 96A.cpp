#include<bits/stdc++.h>
using namespace std;
int main(){
    int zero=0,one=0;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if (s[i]=='0'){
            zero++;
            one = 0;
        }
        else if (s[i]=='1'){
            one++;
            zero=0;
        }
        if (one == 7 || zero == 7){
            cout<<"YES"<<endl;
            return 0;
        }

    
    }
    
 cout<<"NO"<<endl;
}