#include<bits/stdc++.h>
using namespace std;

int prime(long long n) {
    if (n % 2 == 0) {
        return 2;
    }
    for (long long i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            return i;
        }
    }
    return n;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long l, r;
        cin >> l >> r;
        int p;

        if (r <= 3) {
            cout << -1 << endl;
        } else  {
            if(l<r){
            if (r % 2 != 0) {
                r--;}
                cout << "2 " << r - 2 << endl;
            } else {
                 p = prime(r);
                 if(p==l) cout<<-1<<endl;
                 else{
                cout << p << " " << r - p << endl;}
            }
        }
    }
    return 0;
}
