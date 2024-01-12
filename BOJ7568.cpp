#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<pair<int, int> > v;
    int N, x, y, cnt;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }

    pair<int, int> tmp;

    for (int i = 0; i < v.size(); i++) {
        tmp = v[i];
        cnt = 1;
        for (int j = 0; j < v.size(); j++) {
            if (tmp.first < v[j].first && tmp.second < v[j].second)
                cnt++;
        }
        cout << cnt << " ";
    }
    cout << endl;
}