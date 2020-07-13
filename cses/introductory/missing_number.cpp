// CSES : Missing Number - https://cses.fi/problemset/task/1083

#include <iostream>

using namespace std;

int main() {
    long n;
    cin >> n;
    int arr[n];
    long sum = 0;
    for (int i = 0; i < n-1; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << ((n * (n + 1) / 2) - sum);
    return 0;
}
