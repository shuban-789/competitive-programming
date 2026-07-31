#include <bits/stdc++.h>

using namespace std;

#define problemname "lostcow"

long long move(int n) {
    return (long long) pow(-2, n);
}

bool inside(int y, int a, int b) {
    return (a <= y && y <= b);
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    freopen(problemname ".in", "r", stdin); freopen(problemname ".out", "w", stdout);
    int x, y;
    cin >> x >> y;
    int val = 0;
    int distance = 0;
    int counter = 0;
    int prev = x;
    int upper = x;
    int lower = x;
    while (!(inside(y, lower, upper))) {
        val = x + move(counter);
        if (val > upper) {
            upper = val;
        } else if (val < lower) {
            lower = val;
        }
        if (inside(y, lower, upper)) {
            val = y;
        }
        distance += abs(val - prev);
        prev = val;
        counter++;
    }
    cout << distance;
}