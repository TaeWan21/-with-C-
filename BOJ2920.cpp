#include <iostream>

using namespace std;

int main() {
    int arr[8];
    int ascCnt = 0;
    int desCnt = 0;

    for (int i = 0; i < 8; i++) {
        cin >> arr[i];

        if (arr[i] == (i + 1))
            ascCnt++;
        else if (arr[i] == (8 - i))
            desCnt++;
    }

    if (ascCnt == 8)
        cout << "ascending" << "\n";
    else if (desCnt == 8)
        cout << "descending" << "\n";
    else
        cout << "mixed" << "\n";

    return 0;
}
