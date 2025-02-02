#include <iostream>
using namespace std;

int Min(int a, int b){
    return (a > b) ? b : a;
}
int Max(int a, int b){
    return (a > b) ? a : b;
}

int main(){
    int a, b;
    cin >> a >> b;

    for(int i = Min(a, b); i > 0; i--){
        if((a % i == 0) && (b % i == 0)){
            cout << i << endl;
            break;
        }
    }
    for(int i = Max(a, b); i < a * b + 1; i++){
        if((i % a == 0) && (i % b == 0)){
            cout << i << endl;
            break;
        }
    }
}