#include <iostream>

using namespace std;

int main() {
    int A, B, V, day = 1;

    cin >> A >> B >> V;

    if (A > V)
        cout << day << "\n";
    else {
        int oneDay = A - B;

        day += (V - A) / oneDay;

        if ((V - A) % oneDay != 0)
            day++;

        cout << day << "\n";
    }
    return 0;
}