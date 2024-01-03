#include <iostream>

using namespace std;

int main() {
    int N, M, res, sum = 0;
    cin >> N >> M;
    int arr[N];
    int min = 10000000;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < N - 2; i++) {
        for (int j = i + 1; j < N - 1; j++) {
            for (int k = j + 1; k < N; k++) {
                sum = arr[i] + arr[j] + arr[k];
                if (M - sum < min && M - sum >= 0) {
                    min = M - sum;
                    res = sum;
                }
            }
        }
    }
    cout << res;
}
