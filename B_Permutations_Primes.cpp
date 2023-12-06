#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> c(n);

        if (n == 1) {
            cout << "1" << endl;
        } else if (n == 2) {
            cout << "2 1" << endl;
        } else {
            
            c[0] = 2;
            c[n - 1] = 3;
            c[n / 2] = 1;

            
            for (long long i = 1; i < n / 2; i++) {
                c[i] = i + 3;
                c[n - 1 - i] = n - i + 1;
            }

        
            for (long long i = 0; i < n; i++) {
                cout << c[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
