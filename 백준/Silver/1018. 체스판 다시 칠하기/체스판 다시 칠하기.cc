#include <iostream>
using namespace std;

int main(){
    int N, M;
    cin >> N >> M;
    char board[N][M]; 
    char chessBoard1[8][8];
    char chessBoard2[8][8];
    
    int minChanges = 64; 

    // 보드 입력 받기
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> board[i][j];
        }
    }

    // 체스판 색칠 초기화
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if ((i + j) % 2 == 0) {
                chessBoard1[i][j] = 'B';
                chessBoard2[i][j] = 'W';
            } else {
                chessBoard1[i][j] = 'W';
                chessBoard2[i][j] = 'B';
            }
        }
    }

    // 8x8 영역을 잘라서 비교
    for (int i = 0; i <= N - 8; i++) {
        for (int j = 0; j <= M - 8; j++) {
            int count1 = 0; 
            int count2 = 0;  

            // 8x8 영역을 잘라서 비교
            for (int x = i; x < i + 8; x++) {
                for (int y = j; y < j + 8; y++) {
                    if (board[x][y] != chessBoard1[x - i][y - j]) {
                        count1++;  
                    }
                    if (board[x][y] != chessBoard2[x - i][y - j]) {
                        count2++; 
                    }
                }
            }
            if (count1 < count2) {
                if (count1 < minChanges) {
                    minChanges = count1;
                }
            } else {
                if (count2 < minChanges) {
                    minChanges = count2;
                }
            }
            
        }
    }

    cout << minChanges << endl;
}