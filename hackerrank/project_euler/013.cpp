// Project Euler #13 - https://www.hackerrank.com/contests/projecteuler/challenges/euler013/problem

#include <bits/stdc++.h>

using namespace std;

string large_sum(string num1, string num2) {
    string res = "";
    if (num1.length() > num2.length())
        swap(num1, num2);

    int n1 = num1.length(), n2 = num2.length();
    int diff = n2 - n1;
    int carry = 0;

    for (int i = n1 - 1; i >= 0; i--) {
        int sum = ((num1[i] - '0') +  (num2[i + diff] - '0') +  carry);
        res.push_back((sum % 10) + '0');
        carry = sum / 10;
    }

    for (int i = (n2 - n1 - 1); i >= 0; i--) {
        int sum = ((num2[i] - '0') + carry);
        res.push_back((sum % 10) + '0');
        carry = sum / 10;
    }

    if (carry)
        res.push_back(carry + '0');

    reverse(res.begin(), res.end());

    return res;
}

int main() {
    int n;
    string sum = "0";
    cin >> n;
    while (n--) {
        string num;
        cin >> num;
        sum = large_sum(sum, num);
    }

    cout << sum.substr(0, 10) << endl;

    return 0;
}
