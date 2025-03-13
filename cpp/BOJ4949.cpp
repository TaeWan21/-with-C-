#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    while (true) {
        string input;
        getline(cin, input);
        if (input == ".") {
            break;
        }

        bool check = false;
        stack<char> s;

        for (int i = 0; i < input.length(); i++) {
            char c = input[i];

            if ((c == '(') || (c == '[')) {
                s.push(c);
            } else if (c == ')') {
                if (!s.empty() && s.top() == '(')
                    s.pop();
                else {
                    check = true;
                    break;
                }
            } else if (c == ']') {
                if (!s.empty() && s.top() == '[')
                    s.pop();
                else {
                    check = true;
                    break;
                }
            }
        }

        if (!check && s.empty())
            cout << "yes\n";
        else
            cout << "no\n";
    }
    return 0;
}