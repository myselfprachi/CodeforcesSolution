#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<long long> prefixProduct(n), suffixProduct(n);

    // Input the array elements
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Compute prefix products
    prefixProduct[0] = a[0];
    for (int i = 1; i < n; i++) {
        prefixProduct[i] = prefixProduct[i - 1] * a[i];
    }

    // Compute suffix products
    suffixProduct[n - 1] = a[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        suffixProduct[i] = suffixProduct[i + 1] * a[i];
    }

    long long maxSum = a[0];
    int l = 1, r = 1;

    // Find the maximum sum
    for (int i = 0; i < n - 1; i++) {
        long long currentSum = prefixProduct[i] + suffixProduct[i + 1];
        if (currentSum > maxSum) {
            maxSum = currentSum;
            l = i + 1;
            r = i + 2;
        }
    }

    cout << maxSum << endl;
    cout << l << " " << r << endl;

    return 0;
}
