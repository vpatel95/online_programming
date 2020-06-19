// CHFICRM - https://www.codechef.com/problems/CHFICRM

#include <iostream>
#include <map>

#define num_coins 3
#define coin_values {15, 10, 5}

using namespace std;

bool is_change_possible(int coins[], map<int, int> &count, int change) {
    bool result = false;

    if (change == 0) return true;
    if (change < 0) return false;

    for (int i = 0; i < num_coins; i++) {
        if (count[coins[i]] > 0) {
            count[coins[i]]--;
            result = is_change_possible(coins, count, change - coins[i]);
            if (result) {
                return true;
            }
            count[coins[i]]++;
        }
    }

    return result;
}

int main() {
    int coins[3] = coin_values;
    int t;
    cin >> t;
    while (t--) {
        int i, n, flag = 0;
        map<int, int> count;
        cin >> n;
        int c[n];
        for (i = 0; i < n; i++) {
            cin >> c[i];
        }

        for (i = 0; i < n; i++) {
            if (!is_change_possible(coins, count, c[i] - 5)) {
                cout << "NO" << endl;
                flag = 1;
                break;
            } else {
                count[c[i]]++;
            }
        }
        if (!flag) cout << "YES" << endl;
    }
    return 0;
}
