#include<iostream>
using namespace std;

    

int main(){
    int p;
    cin>>p;
    int x=0;
    while(p--){
    string a;
    cin>>a;
    if(a[0]=='+' || a[2]=='+'){
        x++;
    }
    else if(a[0]=='-' || a[2]=='-'){
        x--;
    }

}
    printf("%d\n",x);
    
    

    return 0;
}