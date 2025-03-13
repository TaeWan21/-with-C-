#include <iostream>

using namespace std;

int main() {
    int total, bag1 = 3, bag2 = 5, bagCnt = 0;
    cin >> total;

    while (total >= 0) {
        if (total % bag2 == 0) {
            bagCnt += (total / bag2);
            cout << bagCnt << "\n";
            return 0;
        }
        total -= bag1;
        bagCnt++;
    }
    cout << "-1\n";
}