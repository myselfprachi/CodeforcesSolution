#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n,k,x;
        cin>>n>>k>>x;
        long long a=k*(k+1)/2;
        long long b=(n-k+1+n)*k/2;
        if(a>x || b< x) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
