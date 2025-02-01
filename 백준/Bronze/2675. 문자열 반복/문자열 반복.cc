#include <iostream>
using namespace std;

int StrLen(char* str){
    int count = 0;
    while(str[count] != 0)
        count++;

    return count;
}

int main(){
    int T;
    int R;
    char S[21];

    cin >> T;
    for(int i = 0; i < T; i++){
        cin >> R >> S;
        for(int j = 0; j < StrLen(S); j++){
            for(int k = 0; k < R; k++){
                cout << S[j];
            }
        }
        cout << endl;
    }
}