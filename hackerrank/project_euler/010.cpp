// Project Euler #10 - https://www.hackerrank.com/contests/projecteuler/challenges/euler010/problem

#include <bits/stdc++.h>

#define SZ 1000000

using namespace std;

bool table[SZ+1];
long sum[SZ+1] = {0};

void preprocess(int n) {
    int i, j;
    for (i = 2; i*i <= n; i++) {
        if (table[i] == true) {
            for (j = i*i; j <= n; j += i)
                table[j] = false;
        }
    }

    long s = 0;
    for (i = 2; i <= n; i++) {
        if (table[i]) s += i;
        sum[i] = s;
    }
}

int main() {
    memset(table, true, sizeof(table));
    preprocess(SZ);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << sum[n] << endl;
    }
    return 0;
}
