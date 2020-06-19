// XYSTR - https://www.codechef.com/problems/XYSTR

#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int i = 0, n;
        int pairs = 0;
        string s;
        cin >> s;
        n = s.size();
        while (i < n-1) {
            if (s[i] != s[i+1]) {
                pairs += 1;
                i += 2;
            } else {
                i += 1;
            }
        }
        cout << pairs << endl;
    }
    return 0;
}
