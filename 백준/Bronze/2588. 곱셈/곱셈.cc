#include <iostream>
using namespace std;

int main(){
    int A, B;
    cin >> A;
    cin >> B;
    
    int C, D, E, F;

    C = A * (B % 10);
    D = A * (((B - B % 10) / 10 ) % 10);
    E = A * (B / 100);
    F = C + 10 * D + E * 100;

    cout << C << endl;
    cout << D << endl;
    cout << E << endl;
    cout << F << endl; 
}