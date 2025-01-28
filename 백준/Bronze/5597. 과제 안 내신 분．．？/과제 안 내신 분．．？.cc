#include <iostream>
using namespace std;

int main(){
    int num[31] = {0,};
    int input;

    for(int i = 1; i < 29; i++){
        cin >> input;
        num[input] = input;
    }
    for(int i = 1; i < 31; i++){
        if(i != num[i]){
            cout << i << endl;
        }
    }
}