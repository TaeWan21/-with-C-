#include <iostream>
#include <string>

using namespace std;

int main() {
    int num;
    cin >> num;

    int H, W, N;
    int nowH = 0, nowW = 1;
    int res;
    for (int i = 0; i < num; i++) {
        cin >> H >> W >> N;
        if (N % H == 0) {
            res = H * 100 + (N / H);
        } else {
            res = (N % H) * 100 + (N / H) + 1;
        }
        cout << res << "\n";
    }
}
