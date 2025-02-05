#include <iostream>
using namespace std;

int main(){
    int num;
    bool hasNum = false;
    cin >> num;

    for(int i = 0; i < num; i++){
        int sum = 0;
        int temp = i;

        while (temp > 0){
            sum += temp % 10;
            temp /= 10;
        }

        if(num == i + sum){
            hasNum = true;
            cout << i << endl;
            break;
        }
    }
    if(!hasNum)
        cout << 0 << endl;
}