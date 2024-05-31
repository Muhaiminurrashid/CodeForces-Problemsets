#include<bits/stdc++.h>
using namespace std;
int main(){

int a,b;
cin>>a>>b;
int i=1;
while(i){
        a=a*3;
        b=b*2;
        if(a>b)break;
        i++;
}
cout<<i<<endl;


return 0;

}
