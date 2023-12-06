#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int k;
    cin >> k;
    map<int, int> freq;
    int ans = 0, i = 0, j = 0;

    while (j < n) {
        freq[a[j]]++;
        while (i <= j && freq.size() > k) {
            freq[a[i]]--;
            if (freq[a[i] == 0]) {  
                freq.erase(a[i]);
            }
            i++;
        }
        ans = max(ans, j - i + 1);
        j++;
    }
    cout << ans << endl;

    return 0;
}

