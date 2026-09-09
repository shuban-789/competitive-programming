#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int count = 0;
    cin >> n;
    string flowers;
    vector<int> flowvec;
    cin.ignore();
    if (getline(cin, flowers)) {
        stringstream ss(flowers);
        flowvec = vector<int>(
            istream_iterator<int>(ss),
            istream_iterator<int>()
        );
    }

    for (int i = 0; i < n; i++) {
        multiset<int> stuff;
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += flowvec.at(j);
            stuff.insert(stuff.end(), flowvec.at(j));
            int avg;
            int size = stuff.size();
            if (sum % size == 0) {
                avg = sum / size;
            } else {
                avg = -1;
            }
            if (avg > 0 && stuff.count(avg) > 0) {
                count++;
            }
        }
    }
    cout << count;
}