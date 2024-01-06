#include <iostream>

using namespace std;

int comnination(int N, int K) {
    int q = 1, cnt = K;
    while (cnt--) {
        q *= N--;
    }

    int div = 1;
    for (int i = 1; i <= K; i++) {
        div *= i;
    }

    return (q / div);
}

int main() {
    int N, K;
    cin >> N >> K;
    cout << comnination(N, K);
}