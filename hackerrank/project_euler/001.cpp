// Project Euler - #1 : https://www.hackerrank.com/contests/projecteuler/challenges/euler001/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    long int t;
    cin >> t;
    while (t--) {
        long int p, n, sum = 0;
        cin >> n;
        n--;
        p = n/3;
        sum += ((3*p*(p+1))/2);
        p = n/5;
        sum += ((5*p*(p+1))/2);
        p = n/15;
        sum = sum - ((15*p*(p+1))/2);
        cout << sum << endl;
    }
    return 0;
}
