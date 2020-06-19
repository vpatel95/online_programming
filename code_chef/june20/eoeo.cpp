// EOEO - https://www.codechef.com/problems/EOEO

#include <iostream>

#define ull unsigned long long

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        ull ts;
        cin >> ts;
        while (ts % 2 == 0) {
            ts /= 2;
        }
        cout << ts/2 << endl;
    }
    return 0;
}

