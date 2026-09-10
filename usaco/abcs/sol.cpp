#include <bits/stdc++.h>

using namespace std;

void solve() {
    int x1;
    int x2;
    int x3;
    int x4;
    int x5;
    int x6;
    int x7;
    cin >> x1 >> x2 >> x3 >> x4 >> x5 >> x6 >>x7;
    vector<int> nums = {x1, x2, x3, x4, x5, x6, x7};
    sort(nums.begin(), nums.end());
    int a = nums.at(0);
    int b = nums.at(1);
    int c;
    if (nums.at(2) == a + b) {
        c = nums.at(6) - nums.at(2);
    } else {
        c = nums.at(2);
    }
    cout << a << " " << b << " " << c;
}

signed main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    solve();
}
