#include <iostream>
using namespace std;

int main(){
    int num;
    int sum = 0;
    cin >> num;
    cin.ignore();  // 이전 입력에서 남은 개행 문자 제거

    char input[num + 2];
    cin.getline(input, num + 1);
    for(int i = 0; i < num; i++){
        sum += (input[i] - '0');
    }
    cout << sum << endl;
}