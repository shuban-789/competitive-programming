#include <bits/stdc++.h>

using namespace std;

#define problemname "teleport"

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    freopen(problemname ".in", "r", stdin); freopen(problemname ".out", "w", stdout);
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    int result = min(
        abs(a - b),
        min(
            abs(a - x) + abs(b - y),
            abs(a - y) + abs(b - x)
        )
    );
    cout << result;
}