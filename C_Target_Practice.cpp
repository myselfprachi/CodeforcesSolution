#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        char arr[10][10];
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                cin >> arr[i][j];
            }
        }
     long long  sum = 0;
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                if (arr[i][j] == 'X') {
                    if (i <= 4) {
                        if (j <= 4) {
                            sum += min(i, j) + 1;
                        } else {
                            sum += min(i, 9 - j) + 1;
                        }
                    } else {
                        if (j <= 4) {
                            sum += min(9 - i, j) + 1;
                        } else {
                            sum += min(9 - i, 9 - j) + 1;
                        }
                    }
                }
            }
        }
        cout << sum << endl;
    }

    return 0;
}
