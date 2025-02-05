#include <iostream>
using namespace std;

int Max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int N, M;
    cin >> N >> M;
    int input[N];
    int max = 0;
    int sum;

    for (int i = 0; i < N; i++) {
        cin >> input[i];
    }

    // 3개 숫자의 모든 조합을 탐색
    for (int i = 0; i < N - 2; i++) {
        for (int j = i + 1; j < N - 1; j++) {
            for (int k = j + 1; k < N; k++) {
                sum = input[i] + input[j] + input[k];

                // sum이 M을 초과하지 않는 경우에만 갱신
                if (sum <= M) {
                    max = Max(max, sum);
                }
            }
        }
    }

    cout << max << endl;
    return 0;
}