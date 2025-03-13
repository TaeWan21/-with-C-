#include <iostream>
#include <string>

using namespace std;

int main() {
    int num;
    cin >> num;

    string res;
    int total;
    int cnt;
    for (int i = 0; i < num; i++) {
        cin >> res;

        total = 0;
        cnt = 0;
        for (int j = 0; j < res.length(); j++) {
            if (res[j] == 'O') {
                cnt++;
                total += cnt;
            } else {
                cnt = 0;
            }
        }
        cout << total << "\n";
    }
}