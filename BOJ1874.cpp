#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    stack<int> stack;
    vector<char> result;

    int num, input, cnt = 1;
    cin >> num;

    for (int i = 0; i < num; i++) {
        cin >> input;

        while (cnt <= input) {
            stack.push(cnt);
            cnt += 1;
            result.push_back('+');
        }

        if (stack.top() == input) {
            stack.pop();
            result.push_back('-');
        } else {
            cout << "NO\n";
            return 0;
        }
    }

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << '\n';
    }
    return 0;
}