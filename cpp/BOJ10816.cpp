#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M, num;
    unordered_map<int,int> m;

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> num;
        m[num]++;
    }
    cin >> M;
    for (int i = 0; i < M; i++) {
        cin >> num;
        cout << m[num] << " ";
    }
    cout << '\n';

    return 0;
}