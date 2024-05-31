#include<bits/stdc++.h>
using namespace std;
int main(){

long long n,a[]={5,4,3,2,1};
cin>>n;
long long i,rem,cnt=0;
for( i=0;i<5;i++){

    int divi = n / a[i];
    rem = n % a[i];
    n=rem;
    cnt+=divi;
}
cout<<cnt<<endl;



return 0;
}
