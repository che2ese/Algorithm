#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T, A, B;
    cin >> T;
    for(int i = 0; i < T; i++){
        cin >> A >> B;
        cout << A + B << "\n";
    }
}