#include<stdio.h>
void check1(long long int x ){
    scanf("%lld",&x);
    int count=0;
    while(x>=2){
    if(x % 6 == 0){
        x = x / 6;
        count++;
        if(x==1)break;
    }
    else if ( x % 6 !=0) {
    x = x * 2;
    count++;
    }
    }
    if ( x==1)printf("%d\n",count);
    else printf("-1\n");
    
}
int main(){
    long long int t,n;
    scanf("%lld",&t);
    while(t--){
        check1(n);

    }
    return 0;
}