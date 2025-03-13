#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m, n;
    cin >> m >> n;
    bool arr[1000001] = {false,};
    arr[0] = arr[1] = true;
    for (int i = 2; i * i <= n; i++) {
        if (arr[i])
            continue;
        else {
            for (int j = 2; j * i <= n; j++) {
                arr[i * j] = true;
            }
        }
    }
    for (int i = m; i <= n; i++) {
        if (!arr[i])
            cout << i << '\n';
    }
}
