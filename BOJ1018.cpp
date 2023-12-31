#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

string board[50];
string WB[8] = {
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW"
};

string BW[8] = {
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB"
};

int cntWB(int x, int y) {
    int cnt = 0;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (board[x + i][y + j] != WB[i][j])
                cnt++;
        }
    }
    return cnt;
}

int cntBW(int x, int y) {
    int cnt = 0;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (board[x + i][y + j] != BW[i][j])
                cnt++;
        }
    }
    return cnt;
}

int main() {
    pair<int, int> p;
    cin >> p.first >> p.second;

    int minVal = 64;
    for (int i = 0; i < p.first; i++)
        cin >> board[i];

    for (int i = 0; (i + 8) <= p.first; i++) {
        for (int j = 0; (j + 8) <= p.second; j++) {
            int tmp = min(cntBW(i, j), cntWB(i, j));
            if (tmp < minVal)
                minVal = tmp;
        }
    }
    cout << minVal;
}