#include <bits/stdc++.h>

using namespace std;

int main() {
    int k, n, w;
    cin >> k >> n >> w;
    int sum = w * (k + k * w)/2;
    if (n > sum) {
        cout << 0;
    } else {
        cout << sum - n;
    }
}