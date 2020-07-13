// CSES : Repetitions - https://cses.fi/problemset/task/1069

#include <iostream>

using namespace std;

int solve(string s) {
    int res = 1, len = 1;
    for (int i = 1; i < s.length(); i++) {
        if (s[i - 1] == s[i]) {
            len += 1;
            res = max(res, len);
        } else {
            len = 1;
        }
    }
    return res;
}

int main() {
    string in;
    cin >> in;
    cout << solve(in);
    return 0;
}
