#include <iostream>
#include <cmath>

using namespace std;

int N, r, c, res = 0;

void Z(int y, int x, int size) {
    if (y == r && x == c) {
        cout << res << "\n";
        return;
    }
    if (y + size > r && y <= r && x + size > c && x <= c) {
        Z(y, x, size / 2);
        Z(y, x + (size / 2), size / 2);
        Z(y + (size / 2), x, size / 2);
        Z(y + (size / 2), x + (size / 2), size / 2);
    } else {
        res += size * size;
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> r >> c;

    Z(0, 0, (int) pow(2, N));

    return 0;
}