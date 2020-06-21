// Project Euler #14 - https://www.hackerrank.com/contests/projecteuler/challenges/euler014/problem

#include <bits/stdc++.h>

#define SZ 5000000

using namespace std;

long table[SZ+1];
long result[SZ+1];

long seq (long n) {
    if (n <= SZ && table[n] != -1)
        return table[n];

    long res = 0;

    if (n % 2) res = 1 + seq(((3 * n) + 1));
    else res = 1 + seq(n / 2);

    if (n <= SZ) {
        table[n] = res;
    }

    return res;
}

void preprocess(long n) {
    for (long i = 1; i <= n; i++) {
        if (table[i] == -1) {
            table[i] = seq(i);
        }
    }

    long res = 0, max_len = 0, len;
    for (long i = 0; i <= n; i++) {
        len = table[i];
        if (max_len <= len) {
            res = i;
            max_len = len;
        }
        result[i] = res;
    }
}

int main() {
    memset(table, -1, sizeof(table));
    memset(result, -1, sizeof(result));
    table[1] = 0;
    preprocess(SZ);
    int t;
    cin >> t;
    while (t--) {
        long n;
        cin >> n;
        cout << result[n] << endl;
    }
    return 0;
}
