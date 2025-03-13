#include <iostream>

using namespace std;

int apt[101][15];
int main() {
    int num;
    cin >> num;

    for (int i = 0; i < num; i++) {
        int k,n;
        cin >> k >> n;

        for (int j = 0; j <= k; j++) {
            for (int m = 1; m <= n; m++) {
                if (j == 0)
                    apt[0][m] = m;
                else if (m == 1)
                    apt[j][1] = 1;
                else
                    apt[j][m] = apt[j-1][m] + apt[j][m-1];
            }
        }
        cout << apt[k][n] << "\n";
    }
}