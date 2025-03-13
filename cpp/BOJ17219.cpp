#include <iostream>
#include <map>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    string regSite, pwd;
    map<string, string> m;

    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        cin >> regSite >> pwd;
        m.insert(make_pair(regSite, pwd));
    }

    for (int i = 0; i < M; i++) {
        cin >> regSite;
        cout << m.at(regSite) << '\n';
    }
}
