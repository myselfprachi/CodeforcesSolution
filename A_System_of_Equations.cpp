#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a=sqrt(n);
    int b=sqrt(m);
    int count=0;
    for(int i=0;i<=a;i++){
        for(int j=0;j<=b;j++){
            if((i*i)+j==n&& i+(j*j)==m){
                count++;
                break;
            }
        }
    }cout<<count;
    

    
}