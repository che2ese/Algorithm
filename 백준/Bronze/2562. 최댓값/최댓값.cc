#include <iostream>
using namespace std;

int main(){
    int ary[9];
    int max;

    for(int i =  0; i < 9; i++){
        cin >> ary[i];
    }
    max = ary[0];

    for(int i = 1; i < 9; i++){
        if(ary[i] > max){
            max = ary[i];
        }
    }
    for(int i = 0; i < 9; i++){
        if(max == ary[i]){
            cout << max << endl;
            cout << i + 1 << endl;
        }
    }
}