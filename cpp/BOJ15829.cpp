#include <iostream>
#include <cmath>

using namespace std;

int main() {
    string str;
    char a; // 주어진 문자
    long long M = 1234567891; // 서로소 M
    int L;
    long long hash = 0;
    scanf("%d", &L);
    cin >> str;

    long long r = 1;
    for (int i = 0; i < L; i++) {
        a = str[i];
        hash = (hash + (a - 96) * r) % M;
        r = (r * 31) % M;
    }
    printf("%lld\n", hash);

    return 0;
}