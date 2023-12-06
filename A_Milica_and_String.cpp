#include<bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while(t--) {
        long long n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        long long count = 0;
        long long l = s.length();
        
        for(long long i = 0; i < l; i++) {
            if(s[i] == 'B') {
                count++;
            }
        }
        
        if(count == k) {
            cout << 0 << endl;
        } else {
            if(count < k){
                long long count1 = 0;
                for(long long i = 0; i < l; i++){
                    if(s[i] == 'A') count1++;
                    if(count1 == k - count){
                        cout << 1 << endl << i + 1 << " " << 'B' << endl;
                        break;
                    }
                }
            } else {
                long long count1 = 0;
                for(long long i = 0; i < l; i++){
                    if(s[i] == 'B') count1++;
                    if(count1 == count - k){
                        cout << 1 << endl << i + 1 << " " << 'A' << endl;
                        break;
                    }
                }
            }
        }
    }
    return 0;
}
