#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,n;
    cin>>x>>y>>n;
    for(int i=n;i>=0;i--){
        if(i%x==y){
            cout<<i<<endl;
            break;
        }
    }

    }

    
}