#include <bits/stdc++.h>

#define problem "whereami"

using namespace std;

void solve() {
    int n;
    cin >> n;
    string seq;
    cin >> seq;
    set<string> seen;
    int p = 1;
    while (true) {
        bool stuff = true;
        for (int i = 0; i <= n - p; i++) {
            string sub = seq.substr(i, p);
            if (seen.count(sub) > 0) {
                stuff = false;
            } else {
                seen.insert(sub);
            }
        }
        seen.clear();
        if (stuff) {
            break;
        }
        p++;
    }
    cout << p;
}

signed main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    freopen(problem ".in", "r", stdin);
    freopen(problem ".out", "w", stdout);
    solve();
}