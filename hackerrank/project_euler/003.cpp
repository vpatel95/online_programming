// Project Euler #3 - https://www.hackerrank.com/contests/projecteuler/challenges/euler002/problem

#include<bits/stdc++.h>

#define ull unsigned long long

using namespace std;

ull solve(ull n) {
    ull max = -1;

    while (n % 2 == 0) {
        max = 2;
        n >>= 1;
    }

    for (ull i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) {
            max = i;
            n = n / i;
        }
    }

    if (n > 2) {
        max = n;
    }

    return max;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        ull n;
        cin >> n;
        cout << solve(n) << endl;
    }
    return 0;
}
