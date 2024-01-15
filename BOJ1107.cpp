#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;

int N, M, button, ans;
bool notUse[10] = {false};

bool isPossible(int num) {
    string s = to_string(num);
    for (int i = 0; i < s.size(); i++) {
        if (notUse[s[i] - 48])
            return false;
    }
    return true;
}

int main() {
    cin >> N >> M;

    for (int i = 0; i < M; i++) {
        cin >> button;
        notUse[button] = true;
    }
    if (N == 100) {
        cout << 0;
        return 0;
    }
    ans = abs(N - 100);

    for (int i = 0; i <= 1000000; i++) {
        if (isPossible(i)) {
            int temp = abs(N - i) + to_string(i).size();
            ans = min(ans, temp);
        }
    }
    cout << ans << "\n";
    return 0;
}
