// Project Euler #18 - https://www.hackerrank.com/contests/projecteuler/challenges/euler018/problem

#include <bits/stdc++.h>

using namespace std;

int solve(int n) {
    int i, j;
    int a[n][n], dp[n][n];
    for (i = 0; i < n; i++) {
        for (j = 0; j <= i; j++) {
            cin >> a[i][j];
        }
    }

    for (i = n - 1; i >= 0; i--) {
        for (j = 0; j <= i; j++) {
            if (i == n - 1) { dp[i][j] = a[i][j]; }
            else {
                dp[i][j] = a[i][j] + max(dp[i+1][j], dp[i+1][j+1]);
            }
        }
    }

    return dp[0][0];
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int i, j, n;
        cin >> n;
        cout << solve(n) << endl;
    }
    return 0;
}
