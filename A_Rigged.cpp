#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long long arr[n][2];
        for (long long i = 0; i < n; i++) {
            cin >> arr[i][0] >> arr[i][1];
        }
        int s = arr[0][0];
        int e = arr[0][1];
        int ans=s;

        for (long long i = 1; i < n; i++) {
            if (arr[i][0] >= s && arr[i][1] >= e) {
                ans = -1;
                break; 
            }
        }

        if (ans != -1) {
            ans = s;
        }

        cout << ans << endl;
    }
    return 0;
}
