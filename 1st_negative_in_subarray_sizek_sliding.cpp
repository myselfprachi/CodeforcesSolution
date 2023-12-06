#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int k;
    cin >> k;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> ans;
    queue<int> q;
    for (int i = 0; i < k; i++) {
        if (arr[i] < k) {
            q.push(i);
        }
    }
    int ind = q.front();
    ans.push_back(arr[ind]);
    for (int i = k; i < n; i++) {
        if (arr[i] < 0) q.push(i);
        if (q.front() == i - k) q.pop();
        ind = q.front();
        ans.push_back(arr[ind]);
    }

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    return 0;
}
