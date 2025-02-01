#include <iostream>
using namespace std;

int Change(char* input){
    return (input[0] - '0') * 100 + (input[1] - '0') * 10 + (input[2] - '0');
}
int main() {
    char input1[4]; 
    char input2[4]; 
    char newInput1[4];  
    char newInput2[4]; 

    cin >> input1 >> input2; 
 
    // 역순으로 배열 복사
    for (int i = 0; i < 3; i++) {
        newInput1[i] = input1[2 - i];  
        newInput2[i] = input2[2 - i];  
    }

    if(Change(newInput1) > Change(newInput2))
        cout << Change(newInput1) << endl;
    else
        cout << Change(newInput2) << endl;
}