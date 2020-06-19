// Project Euler #4 - https://www.hackerrank.com/contests/projecteuler/challenges/euler004/problem

#include <bits/stdc++.h>

using namespace std;

bool check(int n, int lim, int res) {
    if (n >= lim || n <= res) {
        return false;
    }

    string num = to_string(n);
    for(int i = 0; i < num.size() / 2; ++i)
        if(num[i] != num[num.size()-1-i])
            return false;

    return true;
}

int solve(int n) {
    int res;
    for (int i = 100; i < 1000; i++) {
        for (int j = 100; j < 1000; j++) {
            int prod = i * j;
            if (check(prod, n, res)) {
                res = prod;
            }
        }
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
