#include <bits/stdc++.h>

using namespace std;

#define problemname "promote"

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    freopen(problemname ".in", "r", stdin); freopen(problemname ".out", "w", stdout);
    int bronze_before, bronze_after;
    int silver_before, silver_after;
    int gold_before, gold_after;
    int plat_before, plat_after;
    int bronze2silver = 0;
    int silver2gold = 0;
    int gold2plat = 0;
    cin >> bronze_before >> bronze_after;
    cin >> silver_before >> silver_after;
    bronze2silver += silver_after - silver_before;
    cin >> gold_before >> gold_after;
    bronze2silver += gold_after - gold_before;
    silver2gold += gold_after - gold_before;
    cin >> plat_before >> plat_after;
    bronze2silver += plat_after - plat_before;
    silver2gold += plat_after - plat_before;
    gold2plat += plat_after - plat_before;
    cout << bronze2silver << endl;
    cout << silver2gold << endl;
    cout << gold2plat << endl;
}