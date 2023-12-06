#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        vector<long long>v(n);
        for(long long i=0;i<n;i++){
            cin>>v[i];
        }
        vector<long long>ans;
        for(long long i=0;i<n;i++){
            if(v[i]==k){
                ans.push_back(i+1);
            }
        }
        for(long long i=0;i<n;i++){
              if(v[i]!=k){
                ans.push_back(i+1);
            }
        }
        for(long long i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}