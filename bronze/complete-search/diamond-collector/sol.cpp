#include <bits/stdc++.h>

using namespace std;

#define problemname "diamond"

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    freopen(problemname ".in", "r", stdin); freopen(problemname ".out", "w", stdout);
    vector<int> diamonds;
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        int d;
        cin >> d;
        diamonds.push_back(d);
    }
    sort(diamonds.begin(), diamonds.end());
    int max_score = 0;
    int left = 0;
    for (int right = 0; right < n; right++) {
        while (abs(diamonds.at(left) - diamonds.at(right)) > k) {
            left++;
        }

        max_score = max(right - left + 1, max_score);
    }
    cout << max_score;
}