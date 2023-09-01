#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    
    for(long long i=2;i<=n;i++){
        int count=0;
        for(long long j=1;j<=i;j++){
        if(i%j==0){
            count++;  
        }
        
        
        
    }
    if(count==2){
            cout<<i<<' ';}
    }
}