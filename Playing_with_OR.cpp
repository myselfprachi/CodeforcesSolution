#include<bits/stdc++.h>
using namespace std;

int bitwiseor(int n, int k, vector<int>& a) {
    int count = 0;
    for (int i = 0; i <= n - k; i++) {
        bool oddFound = false;
        for (int j = 0; j < k; j++) {
            if (a[i + j] % 2 == 1) {
                oddFound = true;
                break;
            }
        }
        if (oddFound) {
            count++;
        }
    }
    return count;
}

int main() {
    int t;
    cin >> t;
    vector<int> results;

    for (int _ = 0; _ < t; _++) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int result =bitwiseor(n, k, a);
        results.push_back(result);
    }

    for (int result : results) {
        cout << result << endl;
    }
}
