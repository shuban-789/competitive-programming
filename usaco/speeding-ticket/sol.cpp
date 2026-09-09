#include <bits/stdc++.h>

using namespace std;

#define problemname "speeding"

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    freopen(problemname ".in", "r", stdin); freopen(problemname ".out", "w", stdout);
    int n, m;
    int speed;
    int limit;
    int maxover = 0;
    vector<int> limits;
    vector<int> speeds;
    cin >> n >> m;
    for (int i = 0; i < n + m; i++) {
        if (i < n) {
            int a, b;
            cin >> a >> b;
            limits.insert(limits.end(), a, b);
        } else {
            int a, b;
            cin >> a >> b;
            speeds.insert(speeds.end(), a, b);
        }
    }
    for (int i = 0; i < 100; i++) {
        speed = speeds.at(i);
        limit = limits.at(i);
        if (speed > limit) {
            if (speed - limit > maxover) {
                maxover = speed - limit;
            }
        }
    }
    cout << maxover;
}