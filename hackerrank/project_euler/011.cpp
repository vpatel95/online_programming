// Project Euler #11 - https://www.hackerrank.com/contests/projecteuler/challenges/euler011/problem

#include <bits/stdc++.h>

#define prod_right(m, i, j) (m[i][j] * m[i][j+1] * m[i][j+2] * m[i][j+3])
#define prod_down(m, i, j) (m[i][j] * m[i+1][j] * m[i+2][j] * m[i+3][j])
#define prod_rdown(m, i, j) (m[i][j] * m[i+1][j+1] * m[i+2][j+2] * m[i+3][j+3])
#define prod_ldown(m, i, j) (m[i][j] * m[i+1][j-1] * m[i+2][j-2] * m[i+3][j-3])

using namespace std;

int grid[20][20];

int calc (int i, int j) {
    int prod = 0;
    if (i + 3 < 20)
        prod = max(prod, prod_down(grid, i, j));

    if (j + 3 < 20)
        prod = max(prod, prod_right(grid, i, j));

    if ((i + 3 < 20) && (j + 3 < 20))
        prod = max(prod, prod_rdown(grid, i, j));

    if ((i + 3 < 20) && (j - 3 >= 0))
        prod = max(prod, prod_ldown(grid, i, j));

    return prod;
}

int main() {
    int i, j, res = 0;
    for (i = 0; i < 20; i++) {
        for (j = 0; j < 20; j++) {
            cin >> grid[i][j];
        }
    }

    for (i = 0; i < 20; i++) {
        for (j = 0; j < 20; j++) {
            res = max(res, calc(i, j));
        }
    }

    cout << res;
    return 0;
}
