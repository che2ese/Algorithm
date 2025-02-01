#include <iostream>
using namespace std;

int StrLen(char* str){
    int count = 0;
    while(str[count] != 0){
        count++;
    }
    return count;
}

int main(){
    char A[10001];
    char B[10001];
    long long sum = 0;

    cin >> A >> B;
    int lenA = StrLen(A);
    int lenB = StrLen(B);
    
    for(int i = 0; i < lenA; i++){
        for(int j = 0; j < lenB; j++){
            sum += (A[i] - '0') * (B[j] - '0');
        }
    }
    cout << sum << endl;
}