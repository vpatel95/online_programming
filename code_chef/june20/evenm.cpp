// EVENM - https://www.codechef.com/problems/EVENM

#include <iostream>
using namespace std;

int is_odd(int num) {
    return (num % 2);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int i, j, n, o = 1, e = 2;
        cin >> n;
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                if (is_odd(i+j)) {
                    cout << e << " ";
                    e += 2;
                } else {
                    cout << o << " ";
                    o += 2;
                }
            }
            cout << endl;
        }
    }
    return 0;
}

