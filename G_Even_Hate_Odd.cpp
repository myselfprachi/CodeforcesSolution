#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int ceven=0,codd=0;
        
        int c=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(n%2!=0){
            cout<<"-1"<<endl;
        }
        
        else{
            for(int i=0;i<n;i++){
                if(a[i]%2==0) ceven++;
            }
            codd=n-ceven;
        
         c=abs(ceven-codd)/2;
        cout<<c<<endl;}
    }
}
