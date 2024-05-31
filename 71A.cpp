#include<iostream>
using namespace std;
#include<string.h>
void way(){
    char h[110];
    cin>>h;
    int l;
    l = strlen(h);
    if (l >10){
        cout<<h[0]<<l-2<<h[l-1]<<endl;
    }
    else cout<<h<<endl;


}
int main(){
    int n;
    cin>>n;
    while(n--){
        way();
    }

}