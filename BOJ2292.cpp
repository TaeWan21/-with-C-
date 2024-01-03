#include <iostream>

using namespace std;

int main() {
    int num, res = 1;
    int i = 1;
    cin >> num;

    while (num > i) {
        i += (6 * res);
        res++;
    }
    cout << res;
}
