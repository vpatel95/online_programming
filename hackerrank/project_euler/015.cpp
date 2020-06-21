// Project Euler #15 - https://www.hackerrank.com/contests/projecteuler/challenges/euler015/problem

#include <bits/stdc++.h>

#define N 501
#define M 501
#define MODULO 1000000007
#define result(n, m) ((table[n][m] + 1) % MODULO)

using namespace std;

long table[N][M];

long paths (int n, int m) {
    if (table[n][m] != -1) {
        return table[n][m];
    }

    table[n][m] = (1 + paths(n, m-1) + paths(n-1, m)) % MODULO;

    return table[n][m];
}

void preprocess(int n, int m) {
    memset(table, -1, (sizeof(table[0][0]) * N * M));
    for (int i = 0; i < M; i++) table[0][i] = 0;
    for (int i = 0; i < N; i++) table[i][0] = 0;

    for (int i = 1; i < n; i++) {
        for (int j = 1; j < m;  j++) {
            if (table[i][j] == -1)
                table[i][j] = paths(i, j);
        }
    }
}

int main() {
    preprocess(N, M);
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        cout << result(n, m) << endl;
    }
    return 0;
}
