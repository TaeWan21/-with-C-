#include <iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    int N, cnt, res = 0;
    cin >> N;

    int num;
    for (int i = 0; i < N; i++) {
        cnt = 0;
        cin >> num;
        for (int j = 1; j <= num; j++) {
            if (num % j == 0)
                cnt++;
        }
        if (cnt == 2)
            res++;
    }

    cout << res << "\n";
}