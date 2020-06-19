// Project Euler #6 - https://www.hackerrank.com/contests/projecteuler/challenges/euler006/problem

#include <bits/stdc++.h>

using namespace std;

long solve(long n) {
    long sum_sq, sq_sum;
    sum_sq = n * (n+1) * (2*n + 1) / 6;
    sq_sum = pow(n * (n+1) / 2, 2);

    return abs(sq_sum - sum_sq);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long n;
        cin >> n;
        cout << solve(n) << endl;
    }
    return 0;
}
