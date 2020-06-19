// Project Euler #7 - https://www.hackerrank.com/contests/projecteuler/challenges/euler007/problem

#include <bits/stdc++.h>

#define MAX 10000

using namespace std;

long table[MAX] = {0};

bool check(long n) {
    if (n <= 1)  return false;
    if (n <= 3)  return true;

    if (n%2 == 0 || n%3 == 0) return false;

    for (long i = 5; i <= sqrt(n); i = i + 6)
        if (n % i == 0 || n % (i+2) == 0)
           return false;

    return true;
}

void solve(int lim) {
    int i = 0;
    long num = 1;
    while (lim) {
        if (check(num)) {
            table[i++] = num;
            lim--;
        }
        num++;
    }
}

int main() {
    int t;
    solve(MAX);
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << table[n-1] << endl;
    }
    return 0;
}
