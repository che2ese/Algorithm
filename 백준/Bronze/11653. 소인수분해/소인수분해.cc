#include <iostream>
using namespace std;

int Decomposition(int num){
    int div;
    for(int i = 2; i < num + 1; i++){
        if(num % i == 0){
            div = i;
            cout << div << endl;
            break;
        }
    }
    return num / div;
}
int main(){
    int N;
    cin >> N;

    while(N != 1){
        N = Decomposition(N);
    }
}