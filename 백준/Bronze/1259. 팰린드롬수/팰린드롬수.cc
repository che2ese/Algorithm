#include <iostream>
using namespace std;

int main(){
    char input[6] = {0,};
    
    while(true){
        int count = 0;
        cin >> input;

        if(input[0] - '0' == 0)
            break;
        
        while(input[count] != 0){
            count++;
        }
        bool isPalindrome = true;   
        for(int j = 0; j < count / 2; j++){
            if(input[j] != input[count - j - 1]) {
                isPalindrome = false;
                break;
            }
        }
        if(isPalindrome)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
}