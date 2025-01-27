#include <iostream>
using namespace std;

int sumUpTo(int n) {
    return n * (n + 1) / 2;
}

int main() {
    int X;
    int mom, son;
    cin >> X;

    int n = 1;
    while (sumUpTo(n) < X) {
        n++;
    }

    if(n % 2 == 0){
        son = X - sumUpTo(n - 1);
        mom = n + 1 - son;
    }
    else{
        mom = X - sumUpTo(n - 1);
        son = n + 1 - mom;
    }

    cout << son << "/" << mom << endl;
    return 0;
}
