#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int c[n];
        int count=0;
        
        for(int i=0;i<n;i++){
            cin>>c[i];
        }
        int last;
        for(int i=0;i<n;i++){
            if(c[i]==c[1]){
                count++;
                last=i;
            }
        }
    
    
        if(count>=k){
            count=0;
            for(int i=n-1;i>last;i--){
                if(c[i]==c[n-1]){
                    count++;
                }
            }}
        
        if(count>=k) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;


    }
}