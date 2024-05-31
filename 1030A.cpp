
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
char a[n];
for (int i=0;i<n;i++){
    cin>>a[i];
}
int hard_check=0;
for (int i=0;i<n;i++){
    if (a[i]=='1')hard_check=1;
}
if (hard_check==1)cout<<"HARD"<<endl;
else cout<<"EASY"<<endl;

return 0;

}
