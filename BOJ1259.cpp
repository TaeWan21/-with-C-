#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string s1;

    while (s1 != "0") {
        cin >> s1;
        string s2 = s1;
        reverse(s1.begin(), s1.end()); // 앞뒤를 바꿔줌
        if (s1 == "0")
            break;
        else if (s1 == s2)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
}
