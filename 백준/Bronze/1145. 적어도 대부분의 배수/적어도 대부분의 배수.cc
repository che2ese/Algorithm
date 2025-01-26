#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e, num;
    int count = 0;
    cin >> a >> b >> c >> d >> e;

    num = 1;

    while (count < 3) { 
        count = 0;
        if (num % a == 0) count++;
        if (num % b == 0) count++;
        if (num % c == 0) count++;
        if (num % d == 0) count++;
        if (num % e == 0)count++;
        if (count < 3) num++;
    }
    cout << num << endl; 
}