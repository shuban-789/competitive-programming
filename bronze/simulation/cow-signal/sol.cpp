#include <bits/stdc++.h>

using namespace std;

#define problemname "cowsignal"

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    freopen(problemname ".in", "r", stdin); freopen(problemname ".out", "w", stdout);
    int m, n, k;
    cin >> m >> n >> k;
    for (int i = 0; i < m; i++) {
        string line;
        string newline;
        cin >> line;
        for (char charac : line) {
            newline += string(k, charac);
        }
        for (int i = 0; i < k; i++) {
            cout << newline << endl;
        }
    }
}