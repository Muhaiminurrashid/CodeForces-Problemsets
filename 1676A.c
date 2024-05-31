#include<stdio.h>
void solve(){
    char a[6];
    gets(a);
    if ((a[0] + a[1] +  a[2]) == (a[3] + a[4] + a[5])) {
        printf("YES\n");
    }
    else printf("NO\n");
}
int main(){
    int t=1;
    scanf("%d",&t);
    while(t--){
        solve();
    }

    return 0;
}