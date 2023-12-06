#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr;

        if (n == 3) {
            cout << 2 << " " << 3 << " " << 4 << endl;
        } else if (n == 4) {
            cout << 2 << " " << 3 << " " << 4 << " " << 5 << endl;
        } else {
            arr.push_back(2);
            arr.push_back(3);
            arr.push_back(4);
            arr.push_back(5);
            
            for (int i = 4; i < n; i++) {
                arr.push_back(arr[i - 1] + 2);
            }
            for (int i = 0; i < n; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
}
