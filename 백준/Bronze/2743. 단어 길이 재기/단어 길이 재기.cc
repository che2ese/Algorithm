#include <iostream>
using namespace std;

int StrLen(char* input){
    int count = 0;
    while(true){
        if(input[++count] == 0)
            break;
    }
    return count;
}
int main(){
    char input[101];
    cin.getline(input, 101);
    cout << StrLen(input) << endl;
}