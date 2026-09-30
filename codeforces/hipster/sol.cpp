#include <bits/stdc++.h>

using namespace std;

void solve() {
    int a;
    int b;
    int c;
    cin >> a >> b;
    int counter = 0;
    while (a != 0 && b != 0) {
        a -= 1;
        b -= 1;
        counter++;
    }
    c = a + b;
    c = (c - (c % 2)) / 2;
    cout << counter << " " << c << '\n';
}

signed main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    solve();
}
