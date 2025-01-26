#include <iostream>
using namespace std;

int main(){
    int num1, num2, num3 , result;

    cin >> num1 >> num2 >> num3;

    if(num1 != num2 && num1 != num3 && num2 != num3){
        int max;
        if(num1 > num2){
            if(num1 > num3){
                max = num1;
            }
            else{
                max = num3;
            }
        }
        else{
            if(num2 > num3){
                max = num2;
            }
            else{
                max = num3;
            }
        }
        result = max * 100;
    }
    else if(num1 == num2 && num1 == num3 && num2 == num3){
        result = 10000 + num1 * 1000;
    }
    else{
        if(num1 == num2){
            result = 1000 + num1 * 100;
        }
        else if(num1 == num3){
            result = 1000 + num1 * 100;
        }
        else if(num2 == num3){
            result = 1000 + num2 * 100;
        }
    }
    cout << result <<endl;
}