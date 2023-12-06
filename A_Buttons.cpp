#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,c;
        cin>>a>>b>>c;
        int s=c/2;
        a=a+c-s;
        b=b+s;
    
        if(a>b) cout<<"First"<<endl;
        else cout<<"Second"<<endl;

    }
}