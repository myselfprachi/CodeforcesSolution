#include<bits/stdc++.h>
using namespace std;

long long minTeleport(vector<long long>& v) {
    int n = v.size();
    if (n == 1) {
        return v[0] - 1;
    }
    
    vector<long long> res;
    res.push_back(1);

    for (int i = 0; i < n; i++) {
        if (v[i] != res[res.size() - 1])
            res.push_back(v[i]);
    }

    long long output = 0;

    for (int i = 0; i < res.size() - 1; i++) {
        output += (res[i] < res[i + 1]) ? (res[i + 1] - res[i]) : 0;
    }

    return output;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> vec(n);
        for (int i = 0; i < n; i++)
            cin >> vec[i];

        cout << minTeleport(vec) << endl;
    }

    return 0;
}
