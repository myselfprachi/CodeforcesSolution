#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int ans = INT_MAX;
        for (int i = 1; i < n; i++) {
            if (arr[i] < arr[i - 1]) {
                ans = 0;
                break;
            }
            ans = min(ans, 1+(arr[i] - arr[i - 1]) / 2);
        }

        cout << ans << endl;
    }

    return 0;
}
