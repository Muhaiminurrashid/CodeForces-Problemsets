#include<bits/stdc++.h>
using namespace std;
int main (){
      int a=0,i,j;
      for (i=1;i<=5;i++){
       for(j=1;j<=5;j++){
          cin>>a;
      if(a == 1){
        cout<<abs(3-i) + abs(3-j) <<endl;
      }
       }
        }
    return 0;
}