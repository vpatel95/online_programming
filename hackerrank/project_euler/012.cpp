// Project Euler #12 - https://www.hackerrank.com/contests/projecteuler/challenges/euler012/problem

#include <bits/stdc++.h>

using namespace std;

int divisors(int n)
{
    int k = 0;
    int count = 1;
    while(n % 2 == 0) {
        k++;
        n >>= 1;
    }

    count *= (k + 1);
    for(long i = 3;i <= sqrt(n); i += 2) {
        k = 0;
        while(n % i == 0) {
            k++;
            n /= i;
        }
        count *= (k + 1);
    }

    if(n > 2) {
        count *= 2;
    }

    return count;
}

long solve(int n) {
    int idx = 1, factors = 0;
    long tri_num;
    while (factors <= n) {
        tri_num = ((idx * (idx + 1)) / 2);
        factors = divisors(tri_num);
        idx++;
    }
    return tri_num;
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
