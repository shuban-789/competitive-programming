#include <bits/stdc++.h>

using namespace std;

void solve() {
    vector<vector<int>> terms;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        char a;
        int b;
        cin >> a >> b;
        if (a == 'G') {
            terms.push_back({b, 1}); // 1 -> ge
        } else {
            terms.push_back({b, 0}); // 0 -> le
        }
    }
    int min_count = n;
    for (int j = 0; j < n; j++) {
        int pos = terms.at(j).at(0);
        int count = 0;
        for (int k = 0; k < n; k++) {
            int b2 = terms.at(k).at(0);
            int a2 = terms.at(k).at(1);
            if (a2 == 1 && b2 > pos) {
                count++;
            } else if (a2 == 0 && b2 < pos) {
                count++;
            }
        }
        if (count < min_count) {
            min_count = count;
        }
    }
    cout << min_count << '\n';
}

signed main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    solve();
}