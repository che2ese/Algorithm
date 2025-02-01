#include <iostream>
using namespace std;

const int MAX = 1000;
int board[MAX][MAX] = {0};
int N;
int input;
int inputX, inputY;

void PrintBoard(){
    for(int y = 0; y < N; y++){
        for(int x = 0; x < N; x++){
            cout << board[y][x] << " ";
        }
        cout << endl;
    }
}

enum Dir{
    DOWN = 0,
    RIGHT = 1,
    UP = 2,
    LEFT = 3,
};

// 갈 수 있는지 판단
bool CanGo(int y, int x){
    if(y < 0 || y >= N)
        return false;
    if(x < 0 || x >= N)
        return false;
    if(board[y][x] != 0)
        return false;
    return true;
}

void DrawBoard(){
    int dir = DOWN; // 현재 방향
    int num = N * N; // 현재 번호
    int y = 0; // 현재 위치
    int x = 0;

    int dy[] = { 1, 0, -1, 0 };
    int dx[] = { 0, 1, 0, -1 };

    while(true){
        board[y][x] = num;

        if(num == input){
            inputY = y + 1;
            inputX = x + 1;
        }
        
        if(num == 1)
            break;

        int nextY = y + dy[dir];
        int nextX = x + dx[dir];

        if(CanGo(nextY, nextX)){
            y = nextY;
            x = nextX;
            num--;
        }
        else{
            dir = (dir + 1) % 4;
        }
    }
}

int main(){
    cin >> N;
    cin >> input;
    DrawBoard();
    PrintBoard();
    cout << inputY << " " << inputX << endl;
}