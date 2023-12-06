#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long sum1=0;
        long long arr[n];
        for(long long i=0;i<n;i++){
            cin>>arr[i];
        }
        long long count=0;
        for(long long i=0;i<n;i++){
            sum1=sum1+arr[i];
            if(arr[i]==1) count++;
        }
        
        
        
        if(sum1>=count+n && n>1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        }
    }
