#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    long long t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        vector<int> sma, capi;
        string la = "qwertyuiopasdfghjklzxcvbnm", ua = "QWERTYUIOPASDFGHJKLZXCVBNM";
        vector<char> a;
        string ans = "";
        int cnt = 0;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'B' && !capi.empty()) {
                a[capi.back()] = '_';
                capi.pop_back();
            } 
            else if (s[i] == 'b' && !sma.empty()) {
                a[sma.back()] = '_';
                sma.pop_back();
            } 
            else if (s[i] != 'b' && s[i] != 'B') {
                if (la.find(s[i]) != string::npos) sma.push_back(cnt);
                else capi.push_back(cnt);
                a.push_back(s[i]);
                cnt++;
            }
        }

        for (char i : a) if (i != '_') ans += i;
        cout << ans << endl;
    }

    return 0;
}
