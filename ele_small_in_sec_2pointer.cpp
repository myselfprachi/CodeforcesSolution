#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int m;
    cin >> m;
    vector<int> p(m);
    for (int i = 0; i < m; i++) {
        cin >> p[i];
    }
    int i=0,j=0;
    while(i<n){
        int count=0;
        while(j<m&&p[j]<v[i]){
            j++;
        }
        cout<<j<<" ";
        i++;
    }
    

}