#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (s.length() > 10) {
            string ab = to_string(s.length() - 2);
            cout << s[0] << ab << s[s.length() - 1] << '\n';
        } else {
            cout << s << '\n';
        }
    }
}

signed main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    solve();
}