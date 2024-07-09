#include<bits/stdc++.h>
using namespace std;
int main(){
 ios::sync_with_stdio(0);
 cin.tie(0);
 string s;
 cin>> s;
 int n = s.length(), k = 7;
 for (int i= 0;i<= n-k; i++){
    int counter = 0;
    for(int j= i;j<= i+k-1; j++){
        if (s[i] == s[j]){
            counter++;
        }
    }
    if (counter == k){
        puts("YES");
        return 0;
    }
 }
 puts("NO");

}