#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    vector<string> v;
    map<string, int> m;
    int N, M, cnt = 0;
    string name;
    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        cin >> name;
        m.insert(make_pair(name, 1));
    }

    for (int i = 0; i < M; i++) {
        cin >> name;
        if (m.find(name) != m.end()) {
            v.push_back(name);
            cnt++;
        }
    }

    cout << cnt << "\n";
    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << '\n';
    }
}