#include <bits/stdc++.h>

using namespace std;

#define problemname "pails"

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    freopen(problemname ".in", "r", stdin); freopen(problemname ".out", "w", stdout);
    int x, y, m;
    cin >> x >> y >> m;
    int x_count = 1;
    int max_pail = 0;
    while (true) {
        int remaining = m - x_count * x;
        int y_count = remaining / y;
        if ((x_count * x) + (y_count * y) <= m) {
            if ((x_count * x) + (y_count * y) > max_pail) {
                max_pail = (x_count * x) + (y_count * y);
            }
        } else {
            break;
        }
        x_count++;
    }
    cout << max_pail;
}