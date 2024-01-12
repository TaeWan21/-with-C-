#include <iostream>
#include <limits>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M, B;
    int ground[500][500];
    int resTime = INT_MAX;
    int resHeight;
    cin >> N >> M >> B;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> ground[i][j];
        }
    }

    for (int h = 0; h <= 256; h++) {
        int fill = 0;
        int remove = 0;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                int height = ground[i][j] - h;
                if (height > 0)
                    remove += height;
                else if (height < 0)
                    fill -= height;
            }
        }
        if (remove + B >= fill) {
            int time = remove * 2 + fill;
            if (resTime >= time) {
                resTime = time;
                resHeight = h;
            }
        }
    }
    cout << resTime << " " << resHeight << '\n';
}
