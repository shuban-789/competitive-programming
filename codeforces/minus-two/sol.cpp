#include <bits/stdc++.h>

using namespace std;

void solve() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        multiset<int> ms;
        vector<int> nums;
        int max_count = 0;
        for (int j = 0; j < n; j++) {
            int a;
            cin >> a;
            ms.insert(abs(a - 2));
            nums.push_back(abs(a - 2));
        }
        for (int term : nums) {
            if (ms.count(term) > max_count) {
                max_count = ms.count(term);
            }
        }
        cout << max_count << '\n';
    }
}

signed main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    solve();
}