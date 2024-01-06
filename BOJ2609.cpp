#include <iostream>

using namespace std;

int main() {
    int a, b;

    cin >> a >> b;

    int min;
    if (b < a)
        min = b;
    else
        min = a;

    int ans;
    for (int i = min; i >= 1; i--) {
        if (((a % i) == 0) && ((b % i) == 0)) {
            ans = i;
            break;
        }
    }
    cout << ans << "\n";
    cout << (a * b) / ans << "\n";

    return 0;
}