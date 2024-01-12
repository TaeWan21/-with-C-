#include <iostream>
#include <stack>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    stack<int> stack;
    int K, val, res = 0;
    cin >> K;

    for (int i = 0; i < K; i++) {
        cin >> val;
        if (val != 0)
            stack.push(val);
        else
            stack.pop();
    }

    while (!stack.empty()) {
        res += stack.top();
        stack.pop();
    }
    cout << res << "\n";
}
