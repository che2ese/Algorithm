#include <iostream>
using namespace std;

int main(){
    int A, B, N;

    cin >> A >> B >> N;

    A %= B; 
    for (int i = 0; i < N - 1; i++) {
        A *= 10;  
        A %= B;  
    }

    A *= 10; 
    cout << A / B;  
}