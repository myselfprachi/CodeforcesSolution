#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,n;
        cin>>a>>b>>n;
        long long arr[n];
        for(long long i=0;i<n;i++){
            cin>>arr[i];
        }
        long long sum=0;
    
        for(long long i=0;i<n;i++){
            if(arr[i]+b<=a){
                b=b+arr[i];
            }
            else{
                sum=sum+(b-1);
                b=min(arr[i]+1,a);
                
            }
            
        
        }
        sum=sum+b;
        cout<<sum<<endl;
    }
}