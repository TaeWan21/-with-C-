#include <iostream>
#include <queue>

using namespace std;

int main() {
    int num;
    queue<int> queue;
    cin >> num;

    for (int i = 1; i <= num; i++) {
        queue.push(i);
    }

    while (queue.size() > 1) {
        queue.pop();
        int front = queue.front();
        queue.pop();
        queue.push(front);
    }
    cout << queue.front() << "\n";
}