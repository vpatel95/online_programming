// CSES : Increasing Array - https://cses.fi/problemset/task/1094

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    long x[n], rounds = 0;
    cin >> x[0];
    for (int i = 1; i < n; i++) {
        cin >> x[i];
        if (x[i - 1] > x[i]) {
            rounds += (x[i - 1] - x[i]);
            x[i] = x[i - 1];
        }
    }
    cout << rounds;
    return 0;
}
