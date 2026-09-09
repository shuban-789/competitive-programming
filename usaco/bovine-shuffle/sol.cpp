#include <bits/stdc++.h>

#define problem "shuffle"

using namespace std;

// reverse shuffle: cow at ai moves to i

vector<int> reverse(vector<int> shuffle, vector<int> ids, int count) {
    vector<int> out(ids.size(), 0);
    for (int i = 0; i < shuffle.size(); i++) {
        int move = shuffle.at(i);
        int id = ids.at(move - 1);
        out.at(i) = id;
    }
    count -= 1;
    if (count == 0) {
        return out;
    } else {
        return reverse(shuffle, out, count);
    }
}

void solve() {
    int n;
    vector<int> shuffle;
    vector<int> ids;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;
        shuffle.push_back(m); 
    }
    for (int i = 0; i < n; i++) {
        int id;
        cin >> id;
        ids.push_back(id); 
    }
    vector<int> ans = reverse(shuffle, ids, 3);
    for (int answer : ans) {
        cout << answer << '\n';
    }
}

signed main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    freopen(problem ".in", "r", stdin);
    freopen(problem ".out", "w", stdout);
    solve();
}