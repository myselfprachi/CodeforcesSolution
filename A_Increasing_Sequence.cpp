#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        int b=1;
        for(int i=0;i<n;i++){
            if(v[i]==b){
                b=v[i]+1;
            }
            if(i==n-1) {break;}
            b++;
        }
        cout<<b<<endl;
    }

}
