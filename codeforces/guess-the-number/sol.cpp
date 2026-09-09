#include <bits/stdc++.h>

using namespace std;

void solve() {
    int lower = 1;
    int upper = 1000000;

    while (upper > lower) {
        int middle = lower + (upper - lower + 1) / 2;
        cout << middle << endl;
        string input;
        cin >> input;
        if (input == ">=") {
            lower = middle;
        } else {
            upper = middle - 1;
        }
    }
    cout << "! " << upper << endl;
}

signed main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    solve();
    return 0;
}