#include<stdio.h>
int main(){
long long n,i,rem,count,note=0;
scanf("%lld",&n);
int a[5]={100,20,10,5,1};
for(i=0;i<5;i++){
    
    
    count = n / a[i];
    rem = n % a[i];
    n = rem;
   note +=count;

}
printf("%lld\n",note);
    return 0;
}