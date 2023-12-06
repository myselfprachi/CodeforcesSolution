#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int k;
    cin >> k;
    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int ans = INT_MIN;
    int sum = 0;

    for (int i = 0; i < k; i++) {
        sum += v[i];
    }

    for (int i = k; i < n; i++) {
        sum += v[i] - v[i - k];
        ans = max(ans, sum);
    }

    cout << ans;

    return 0;
}

