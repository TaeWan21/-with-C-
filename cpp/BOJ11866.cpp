#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> q1, q2;
    int N, K, front;

    cin >> N >> K;

    for (int i = 1; i <= N; i++) {
        q1.push(i);
    }

    while (!q1.empty()) {
        for (int i = 0; i < K - 1; i++) {
            front = q1.front();
            q1.pop();
            q1.push(front);
        }
        front = q1.front();
        q1.pop();
        q2.push(front);
    }

    cout << '<';
    while (q2.size() != 1) {
        cout << q2.front() << ", ";
        q2.pop();
    }
    cout << q2.front() << ">\n";
}