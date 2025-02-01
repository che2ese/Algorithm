#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    int* input = new int[N];
    int numCount = 0;

    for(int i = 0; i < N; i++){
        cin >> input[i];
    }
    for(int i = 0; i < N; i++){
        int count = 0;
        
        for(int j = 2; j < input[i]; j++){
            if(input[i] % j == 0){
                count++;
            }
        }
        if(count == 0){
            if(input[i] == 1){
                numCount--;
            }
            numCount++;
        }
    }
    cout << numCount;

    delete[] input;
}