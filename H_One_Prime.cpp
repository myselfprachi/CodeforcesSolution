#include<bits/stdc++.h>
using namespace std;
int main(){
    long long x;
    cin>>x;
    int count=0;
    for(long long i=1;i<=x;i++){
        if(x%i==0){
            count ++;
        }
    }
    if(count==2){
        cout<<"YES";
    }
    else cout<<"NO";
    
}