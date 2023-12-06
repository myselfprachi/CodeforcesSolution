#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>arr(n);
        for(ll i=0; i<n;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        int mini=arr[0], maxi=arr[n-1];
        vector<ll>ans;
        while(mini!=maxi){
            int x=(mini%2==1)&&(maxi%2==0);
            ans.push_back(x);
            mini=(mini+x)/2;
            maxi=(maxi+x)/2;

        }
        cout<<ans.size()<<endl;
        if(!ans.empty()&& ans.size()<=n){
            for(auto x:ans){
                cout<<x<<" ";
            }
            cout<<endl;
        }
    }
    
}