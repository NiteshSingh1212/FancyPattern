#include<iostream>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
        cout<<i+3;
        }cout<<endl;
    }
    
       for(int i=0;i<n;i++){
        
        for(int j=0;j<n-i-1;j++){
        cout<<n-i+1;
         
        }
       
        cout<<endl;
    }
}