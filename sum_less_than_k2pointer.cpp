#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int k;cin>>k;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    int sum=0,i=0,j=0;
    int ans=0;
    while(j<n){
        sum+=v[j];
        while(i<=j && sum>k){
            sum-=v[i];
            i++;
        }
        ans=max(ans,j-i+1);
        j++;
    }
    cout<<ans<<endl;
    

}
