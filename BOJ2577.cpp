#include <iostream>
#include <string>

using namespace std;

int main() {
    int A, B, C;
    int arr[10] = {};
    cin >> A >> B >> C;

    int res = A * B * C;
    string to_string_res = to_string(res);

    for (int i = 0; i < to_string_res.length(); i++) {
        arr[(int) (to_string_res[i] - '0')]++;
    }

    for (int i = 0; i < 10; i++) {
        cout << arr[i] << endl;
    }
}
