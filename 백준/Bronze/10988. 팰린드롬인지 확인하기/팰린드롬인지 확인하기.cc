#include <iostream>
using namespace std;

int StrLen(char* str){
    int count = 0;
    while(str[count] != 0)
        count++;
    return count;
}

int main(){
    char input[101];
    cin >> input;

    for(int i = 0; i < StrLen(input) / 2; i++){
        if(input[i] != input[StrLen(input) - i - 1]){
            cout << 0;
            return 0;
        }
    }
    cout << 1;
}