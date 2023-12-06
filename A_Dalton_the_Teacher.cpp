#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long>p(n);
        for(long long i=0;i<n;i++){
            cin>>p[i];

        }
        long long count=0;
        for(long long i=0;i<n;i++){
            if(p[i]==i+1){
                count++;
            }
            
        }
        if(count%2==0) cout<<count/2<<endl;
        else cout<<count/2+1<<endl;
    }

}