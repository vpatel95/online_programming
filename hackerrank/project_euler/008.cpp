// Project Euler #8 - https://www.hackerrank.com/contests/projecteuler/challenges/euler008/problem

#include <bits/stdc++.h>

#define tonum(x) (x - '0')
#define MIN(a,b) (((a)<(b))?(a):(b))
#define MAX(a,b) (((a)>(b))?(a):(b))

using namespace std;

int solve (string num, int n, int k) {
    int i, j, prod = 1, res = 0;
    for (i = 0; i < (n - k); i++) {
        for (j = 0; j < k; j++) {
            prod *= tonum(num[i + j]);
        }
        res = MAX(res, prod);
        prod = 1;
    }
    return res;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        string num;
        cin >> n >> k >> num;
        cout << solve(num, n, k) << endl;
    }
    return 0;
}
