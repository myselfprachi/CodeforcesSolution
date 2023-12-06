#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int arr[26] = {0};

        for (char c : s) {
            arr[c - 'a']++;
        }

        int maximum = *max_element(arr, arr + 26);
        int r;

        if (maximum > n / 2) {
            r = 2 * maximum - n;
        } else {
            if (n % 2 == 1) {
                r = 1;
            } else {
                r = 0;
            }
        }

        cout << r<< endl;
    }

    return 0;
}
