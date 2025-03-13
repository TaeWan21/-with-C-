#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int num[8001] = {0,};
    int mostNum = -9999;

    vector<int> v;
    int N, tmp, sum = 0, most_cnt, avg, mid, range, max, min;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> tmp;
        v.push_back(tmp);
        sum += tmp;
        num[tmp + 4000]++;
    }
    avg = round((float) sum / N);
    sort(v.begin(), v.end());

    bool b = false;
    for (int i = 0; i < 8001; i++) {
        if (num[i] == 0)
            continue;
        if (num[i] == mostNum) {
            if (b) {
                most_cnt = i - 4000;
                b = false;
            }
        }
        if (num[i] > mostNum) {
            mostNum = num[i];
            most_cnt = i - 4000;
            b = true;
        }
    }
    mid = v[v.size() / 2];
    range = v.back() - v.front();

    cout << avg << '\n' << mid << '\n' << most_cnt << '\n' << range;
}