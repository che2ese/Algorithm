#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B;
    cin >> C;

    A += (B + C) / 60;
    B = (B + C) % 60;
    A %= 24;

    cout << A << " " << B << endl;
    return 0;
}