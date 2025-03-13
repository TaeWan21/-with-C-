#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> v;
    int num, val;
    cin >> num;
    for (int i = 0; i < num; i++) {
        cin >> val;
        v.push_back(val);
    }
    sort(v.begin(), v.end());

    int begin, end, mid;
    bool check;
    cin >> num;
    for (int i = 0; i < num; i++) {
        begin = 0, end = v.size() - 1, mid = (begin + end) / 2;
        check = false;
        cin >> val;
        while (begin <= end) {
            mid = (begin + end) / 2;
            if (val > v[mid]) {
                begin = mid + 1;
            } else if (val == v[mid]) {
                cout << "1" << '\n';
                check = true;
                break;
            } else {
                end = mid - 1;
            }
        }
        if (!check)
            cout << "0" << '\n';
    }
}