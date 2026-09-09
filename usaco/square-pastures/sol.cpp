#include <bits/stdc++.h>

using namespace std;

#define problemname "square"

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    freopen(problemname ".in", "r", stdin); freopen(problemname ".out", "w", stdout);
    int s1x1, s1y1, s1x2, s1y2; // bottom left xy, top right xy
    int s2x1, s2y1, s2x2, s2y2; // bottom left xy, top right xy
    cin >> s1x1 >> s1y1 >> s1x2 >> s1y2;
    cin >> s2x1 >> s2y1 >> s2x2 >> s2y2;
    int max_x_dist = abs(max(s1x2, s2x2) - min(s1x1, s2x1));
    int max_y_dist = abs(max(s1y2, s2y2) - min(s1y1, s2y1));
    cout << pow(max(max_x_dist, max_y_dist), 2);
}