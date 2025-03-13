#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    bool check[21] = {false};
    int M, num;
    string cal;
    cin >> M;

    for (int i = 0; i < M; i++) {
        cin >> cal;
        if (cal == "add") {
            cin >> num;
            if (!check[num])
                check[num] = true;
        } else if (cal == "remove") {
            cin >> num;
            if (check[num])
                check[num] = false;
        } else if (cal == "check") {
            cin >> num;
            if (check[num])
                cout << "1\n";
            else
                cout << "0\n";
        } else if (cal == "toggle") {
            cin >> num;
            if (check[num])
                check[num] = false;
            else
                check[num] = true;
        } else if (cal == "all") {
            for (int j = 1; j <= 20; j++) {
                check[j] = true;
            }
        } else if (cal == "empty") {
            for (int j = 1; j <= 20; j++) {
                check[j] = false;
            }
        }
    }
}