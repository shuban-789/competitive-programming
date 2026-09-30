#include <bits/stdc++.h>

using namespace std;

void solve() {
    vector<vector<int>> positions;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        char direction;
        int x;
        int y;
        cin >> direction >> x >> y;
        if (direction == 'N') {
            positions.push_back({x, y, -1, i}); // N -> -1
        } else {
            positions.push_back({x, y, -2. i}); // E -> -2
        }
    }
    vector<vector<int>> wins;

}

signed main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    solve();
}