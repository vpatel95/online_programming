// Project Euler #16 - https://www.hackerrank.com/contests/projecteuler/challenges/euler016/problem

#include <bits/stdc++.h>

using namespace std;

vector <int> cache;

void preprocess() {
    vector <int> digits(1, 1);
    int power = 0;
    cache.push_back(1);
    while (power <= 10000) {
        int digit_sum = 0, carry = 0;

        for (int i = 0; i < digits.size(); i++) {
            carry += digits[i] * 2;
            digits[i] = carry % 10;
            digit_sum += digits[i];
            carry /= 10;
        }
        while (carry != 0) {
            digits.push_back(carry % 10);
            digit_sum += carry % 10;
            carry /= 10;
        }
        cache.push_back(digit_sum);
        power++;
    }
}

int main() {
    int t;
    cin >> t;
    preprocess();
    while (t--) {
        int n;
        cin >> n;
        cout << cache[n] << endl;
    }
    return 0;
}
