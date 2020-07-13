// CSES : Weird Algorithm - https://cses.fi/problemset/task/1068

#include <iostream>

using namespace std;

void solve (long n) {
    cout << n << " ";
    while (n != 1) {
        if (n % 2)
            n = (3 * n) + 1;
        else
            n >>= 1;

        cout << n << " ";
    }
}

int main() {
    long n;
    cin >> n;
    solve(n);
    return 0;
}
