#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> v;
    int n, val;
    double cut, avg, sum = 0;
    cin >> n;

    cut = n * 0.15;
    cut = round(cut);

    if (n == 0) {
        cout << "0\n";
        return 0;
    }

    for (int i = 0; i < n; i++) {
        cin >> val;
        v.push_back(val);
    }
    sort(v.begin(), v.end());

    for (int i = cut; i < n - cut; i++) {
        sum += v[i];
    }
    avg = sum / (n - (2 * cut));

    cout << round(avg) << "\n";

    return 0;
}
