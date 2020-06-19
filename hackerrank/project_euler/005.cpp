// Project Euler #5 - https://www.hackerrank.com/contests/projecteuler/challenges/euler005/problem

#include <bits/stdc++.h>

#define ull unsigned long long

using namespace std;

ull gcd (ull a, ull b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

ull solve (int n) {
    ull res = 1;

    for (int i = 1; i <= n; i++) {
        res = (((i * res)) / (gcd(i, res)));
    }

    return res;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << solve(n) << endl;
    }
    return 0;
}

