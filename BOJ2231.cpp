#include <iostream>

using namespace std;

int main() {
    int N, sum, num, res = 0;
    cin >> N;

    for (int i = 1; i < N; i++) {
        sum = 0;
        num = i;
        while (num != 0) {
            sum += num % 10;
            num /= 10;
        }
        if (sum + i == N) {
            res = i;
            break;
        }
    }
    cout << res << '\n';

}
