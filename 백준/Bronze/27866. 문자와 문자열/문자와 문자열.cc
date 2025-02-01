#include <iostream>
using namespace std;

int main() {
    char input[1001];
    int num;

    cin.getline(input, 1001);
    cin >> num;

    cout << input[num - 1] << endl;

    return 0;
}