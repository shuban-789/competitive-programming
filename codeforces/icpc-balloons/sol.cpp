#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int m;
        string s;
        set<char> problems;
        int score = 0;
        cin >> m;
        cin >> s;
        for (int j = 0; j < m; j++) {
            if (!(problems.find(s[j]) != problems.end())) {
                score += 2;
                problems.insert(s[j]);
            } else {
                score++;
            }
        }
        cout << score << '\n';
    }
}

signed main() {
    cin.tie(nullptr)-> sync_with_stdio(false);
    solve();
}