#include<bits/stdc++.h>
using namespace std;
int main(){
int year;
cin>>year;
while(1){

    year++;

    int a=year / 1000;
    int b = year / 100 % 10;
    int c = year / 10 % 10;
    int d = year % 10;

    if(a!=b && a!=d && a!=c && b!=d && b!=c && c!=d){
        cout<<year<<endl;
        return 0;
    }
    }
return 0;
}
