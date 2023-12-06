#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, k;
        cin >> n >> k;
        vector<long long> v(n);
        
        for (auto& it : v) {
            cin >> it;
        }

        long long c = n - 1;
        bool chk = true;
        set<long long> s;

        for (int i = 0; i < k; i++) {
            if (s.count(c)) break;

            if (v[c] > n) {
                chk = false;
                break;
            }

            s.insert(c);
            c = (c - v[c] + n) % n;
        }

        cout << (chk ? "YES" : "NO") << endl;
    }

    return 0;
}
