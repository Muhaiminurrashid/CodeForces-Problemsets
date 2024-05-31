#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int i;
for (i=2;i<=n;i++){
    if(n % i == 0){
       
       int j,d=0;
       for(j=2;j*j<=i;j++){
       if (i % j == 0){
            d++;
        }
        }
        if (d==0){
            printf("%d ",i);

       }

     
    } 
}

    return 0;
}