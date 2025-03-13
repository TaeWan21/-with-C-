#include <iostream>
#include <deque>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    deque<int> deque;
    int N, num;

    cin >> N;

    string s;

    for (int i = 0; i < N; i++) {
        cin >> s;
        if (s == "push_front") {
            cin >> num;
            deque.push_front(num);
        } else if (s == "push_back") {
            cin >> num;
            deque.push_back(num);
        } else if (s == "pop_front") {
            if (deque.empty())
                cout << "-1\n";
            else {
                cout << deque.front() << '\n';
                deque.pop_front();
            }
        } else if (s == "pop_back") {
            if (deque.empty())
                cout << "-1\n";
            else {
                cout << deque.back() << "\n";
                deque.pop_back();
            }
        } else if (s == "size") {
            cout << deque.size() << "\n";
        } else if (s == "empty") {
            cout << deque.empty() << "\n";
        } else if (s == "front") {
            if (deque.empty())
                cout << "-1\n";
            else
                cout << deque.front() << "\n";
        } else if (s == "back") {
            if (deque.empty())
                cout << "-1\n";
            else
                cout << deque.back() << "\n";
        }
    }
    return 0;
}
