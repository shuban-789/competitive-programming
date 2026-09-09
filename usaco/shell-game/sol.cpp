#include <bits/stdc++.h>

using namespace std;

#define problemname "shell"

int swapped(int a, int b, int shell) {
    if (a == shell) {
        return b;
    } else if (b == shell) {
        return a;
    }
    return shell;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    freopen(problemname ".in", "r", stdin); freopen(problemname ".out", "w", stdout);
    int n;
    cin >> n;
    int one = 1;
    int two = 2;
    int three = 3;
    int one_score, two_score, three_score;
    one_score = two_score = three_score = 0;
    for (int i = 0; i < n; i++) {
        int a, b, g;
        cin >> a >> b >> g;
        one = swapped(a, b, one);
        two = swapped(a, b, two);
        three = swapped(a, b, three);
        if (g == one) {
            one_score++;
        }
        if (g == two) {
            two_score++;
        }
        if (g == three) {
            three_score++;
        }
    }
    cout << max(one_score, max(two_score, three_score));
}