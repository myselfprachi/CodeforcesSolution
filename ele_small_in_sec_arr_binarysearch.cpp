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

    // For each element in the first array, find the count of elements smaller in the second array
    for (int i = 0; i < n; i++) {
        int count = 0;
        int low = 0, high = m - 1;

        while (low <= high) {
            int mid = (low + high) / 2;

            if (v[i] > p[mid]) {
                // If the element in the first array is greater than the mid element in the second array,
                // there are 'mid + 1' elements smaller in the second array.
                count = mid + 1;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        cout << count << " ";
    }

    return 0;
}
