#include<iostream>
using namespace std;
int main(){
    int l=0;
    string n; 
    cin>>n;
  
  for (int i=0;i<n.size();i++){
       
    
        if (n[i]== '7' || n[i] == '4'){
            l++;

        }
        
    }
  
        if (l == 4 || l == 7 ){
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }


    return 0;
}