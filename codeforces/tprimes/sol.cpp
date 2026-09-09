#include <bits/stdc++.h>
#include <random>
#include <cmath>

using namespace std;

bool is_prime(int n) {
    if (n < 2) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;

    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

void solve() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        long long m;
        cin >> m;

        long long root = sqrtl(m);

        if (root * root == m && is_prime(root)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}

signed main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    solve();
}