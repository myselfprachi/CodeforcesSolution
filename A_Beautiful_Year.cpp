#include <iostream>
#include <vector>

using namespace std;

bool hasUniqueDigits(int num) {
    vector<bool> digits(10, false); // Initialize an array to keep track of digits

    while (num > 0) {
        int digit = num % 10;
        if (digits[digit]) {
            return false; // Return false if digit is repeated
        }
        digits[digit] = true; // Mark digit as used
        num /= 10;
    }

    return true;
}

int main() {
    int y;
    cin >> y;

    y++; // Increment y to find the next number

    while (!hasUniqueDigits(y)) {
        y++;
    }

    cout << y;

    return 0;
}
