// PRICECON - https://www.codechef.com/problems/PRICECON

#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i, loss = 0;
        int rev = 0;
        cin >> n >> k;
        int p[n];
        for (i = 0; i < n; i++) {
            cin >> p[i];
            rev += p[i];
            if (p[i] - k > 0) {
                loss += p[i] - k;
            }
        }
        cout << loss << endl;
    }
    return 0;
}
