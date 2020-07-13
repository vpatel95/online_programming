// Project Euler #17 - https://www.hackerrank.com/contests/projecteuler/challenges/euler017/problem

#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long

string units[] = {
    "", "One", "Two", "Three", "Four", "Five",
    "Six", "Seven", "Eight", "Nine", "Ten",
    "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen",
    "Sixteen", "Seventeen", "Eighteen", "Nineteen", "Twenty"
};

string tens[] = {
    "", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"
};

string hundred = "Hundred";
string thousand = "Thousand";
string million = "Million";
string billion = "Billion";

vector <string> result;

void helper(ull n) {
    if (n <= 20) {
        result.push_back(units[n]);
    } else if (n < 100) {
        result.push_back(tens[n / 10]);
        helper(n % 10);
    } else if (n < 1000) {
        helper (n / 100);
        result.push_back(hundred);
        helper(n % 100);
    } else if (n < 1e6) {
        helper (n / 1000);
        result.push_back(thousand);
        helper(n % 1000);
    } else if (n < 1e9) {
        ull temp = 1e6;
        helper (n / temp);
        result.push_back(million);
        helper(n % temp);
    } else {
        ull temp = 1e9;
        helper (n / temp);
        result.push_back(billion);
        helper(n % temp);
    }
}

void solve(ull n) {
    result.clear();
    if (n == 0) {
        cout << "Zero" << endl;
        return;
    }
    helper(n);
    cout << result[0];
    for (int i = 1; i < result.size(); i++) {
        if (result[i] == "") continue;
        cout << " " << result[i];
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        ull n;
        cin >> n;
        solve(n);
    }
    return 0;
}
