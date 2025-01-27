#include <iostream>
using namespace std;

int main() {
    int N;

    for (int i = 0; i < 3; i++) {  // 3번 반복
        __int128 S = 0;  // __int128을 사용하여 더 큰 숫자 처리
        cin >> N;  // 숫자의 개수 입력
        long long int* num = new long long int[N];  // 숫자 배열

        // 숫자 입력 받기
        for (int j = 0; j < N; j++) {
            cin >> num[j];
        }

        // 숫자들의 합을 계산
        for (int j = 0; j < N; j++) {
            S += num[j];
        }

        // 합의 부호에 따라 출력
        if (S > 0) cout << "+" << endl;
        else if (S == 0) cout << "0" << endl;
        else cout << "-" << endl;

        // 메모리 해제
        delete[] num;
    }
}
