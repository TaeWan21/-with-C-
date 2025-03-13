#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    int testCnt, N, M, num, cnt;
    cin >> testCnt;

    for (int i = 0; i < testCnt; i++) {
        cnt = 0;
        cin >> N >> M;
        queue<pair<int, int> > q;
        priority_queue<int> pq;
        for (int j = 0; j < N; j++) {
            cin >> num;
            q.push(make_pair(j, num));
            pq.push(num);
        }
        while (!q.empty()) {
            int idx = q.front().first;
            int val = q.front().second;
            q.pop();

            if (pq.top() == val) {
                pq.pop();
                cnt++;
                if (idx == M) {
                    cout << cnt << "\n";
                    break;
                }
            } else {
                q.push(make_pair(idx, val));
            }
        }
    }
}
