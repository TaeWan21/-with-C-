#include <iostream>
#include <map>
#include <string>
#include <cstdlib>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    map<string, int> m1;
    map<int, string> m2;
    int N, M;
    string name;
    cin >> N >> M;

    for (int i = 1; i <= N; i++) {
        cin >> name;
        m1[name] = i;
        m2[i] = name;
    }

    for (int i = 0; i < M; i++) {
        cin >> name;
        if (atoi(name.c_str()) == 0)
            cout << m1[name] << "\n";
        else
            cout << m2[atoi(name.c_str())] << '\n';
    }
    return 0;
}
