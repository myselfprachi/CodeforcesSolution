#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i]>>b[i];
        }
        int c=INT_MIN;
        for(int i=0;i<n;i++){
            if(a[i]<=10){
                if(b[i]>c){
                    c=b[i];
                }
            }
        }
        int i;
        for( i=0;i<n;i++){
            if(b[i]==c){
                break;
            }
        }
        cout<<i+1<<endl;
    }
}