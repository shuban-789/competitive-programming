#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

template <typename T>
using vec = vector<T>;

template <typename... T>
void in(T&... args) {
    (cin >> ... >> args);
}

template <typename... T>
void print(const T&... args) {
    (cout << ... << args) << '\n';
}

template <typename... T>
void flint(const T&... args) {
    (cout << ... << args) << endl;
}

void solve() {
    int n;
    ll k;
    vec<int> nums;
    vec<int> distrib;
    in(n, k);
    ll d0;
    in(d0);
    ll chain = d0;
    ll sum = k + 1;
    for (int i = 1; i < n; i++) {
        ll d;
        in(d);
        sum += min((d - chain), (k + 1));
        chain = d;
    }
    print(sum);
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    solve();
}