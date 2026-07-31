#include <bits/stdc++.h>

using namespace std;

#define problemname "mixmilk"

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    freopen(problemname ".in", "r", stdin); freopen(problemname ".out", "w", stdout);
    int c1, c2, c3;
    int m1, m2, m3;
    cin >> c1 >> m1;
    cin >> c2 >> m2;
    cin >> c3 >> m3;
    int bucket1 = m1;
    int bucket2 = m2;
    int bucket3 = m3;
    for (int i = 0 ; i < 100; i++) {
        int tag = i % 3;
        if (tag == 0) {
            if (bucket1 + bucket2 <= c2) {
                bucket2 += bucket1;
                bucket1 = 0;
            } else {
                int quantity = c2 - bucket2;
                bucket2 += quantity;
                bucket1 -= quantity;
            }
        }
        if (tag == 1) {
            if (bucket2 + bucket3 <= c3) {
                bucket3 += bucket2;
                bucket2 = 0;
            } else {
                int quantity = c3 - bucket3;
                bucket3 += quantity;
                bucket2 -= quantity;
            }
        }
        if (tag == 2) {
            if (bucket3 + bucket1 <= c1) {
                bucket1 += bucket3;
                bucket3 = 0;
            } else {
                int quantity = c1 - bucket1;
                bucket1 += quantity;
                bucket3 -= quantity;
            }
        }
    }
    cout << bucket1 << endl << bucket2 << endl << bucket3;
}