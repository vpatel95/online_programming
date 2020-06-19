// Project Euler #2 - https://www.hackerrank.com/contests/projecteuler/challenges/euler002/problem

#include <iostream>

#define ull unsigned long long

using namespace std;

ull solve (ull n) {
    if (n < 2) return 0;
    if (n == 2) return 2;
    ull res = 2, f = 1, s = 2, t;
    while (n >= (t = (f+s))) {
        if (t % 2 == 0) {
            res += t;
        }
        f = s, s = t;
    }
    return res;
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
