#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, x;
        cin >> n >> x;
        int v[n + 1];
        v[0] = 0;

        for(int i = 1; i <= n; i++) {
            cin >> v[i];
        }

        int mingas = 0;

        for(int i = 1; i <= n; i++) {
            mingas = max(mingas, v[i] - v[i - 1]); 
        }

        mingas = max(mingas, 2 * (x - v[n]));

        cout << mingas << endl;
    }

    return 0;
}
