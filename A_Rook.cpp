#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        char col;
        int row;
        cin >> col >> row;
        for (char c = 'a'; c <= 'h'; c++) {
            if (c != col) {
                cout << c << row <<endl;
            }
        }
        for (int r = 1; r <= 8; r++) {
            if (r != row) {
                cout << col << r << endl;
            }
        }

        cout << endl;
    }

    return 0;
}
