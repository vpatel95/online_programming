// Project Euler #9 - https://www.hackerrank.com/contests/projecteuler/challenges/euler009/problem

// Naive solution is to find a and b using brute force in O(N^2) time.
// On simplyfying equations considering a and N as constants we can solve
// it in O(N) time.
//
// Solution :
// a^2 + b^2 = c^2      ----- (1)
// a + b + c = N        ----- (2)
//
// c = N - a - b
// c^2 = (N - a - b)^2
// a^2 + b^2 = N^2 + a^2 + b^2 -2Na -2Nb + 2ab
// 0 = N^2 -2Na -2Nb + 2ab
// 2Nb - 2ab = N^2 - 2Na
// b = (N^2 - 2Na)/(2N - 2a)
//
// Thus,
// a = i
// b = (N^2 - 2Ni)/(2N - 2i)
// c = N - a - b
//
// Here check b > 0 and c > 0

#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

ll solve (int n) {
    int res = -1;
    for (int a = 1; a < n; a++) {
        int b = (pow(n, 2) - (2 * n * a))/(2*n - 2*a);
        int c = n - a - b;
        if ((pow(a, 2) + pow(b, 2) == pow(c, 2)) && (b > 0) && (c > 0)) {
            res = max(res, a * b * c);
        }
    }
    return res;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        cout << solve(n) << endl;
    }
    return 0;
}
