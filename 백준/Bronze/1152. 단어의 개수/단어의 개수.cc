#include <iostream>
using namespace std;

int CountWord(char* input) {
    int len = 0;
    int count = 0;
    while (input[len] != 0) {
        if (input[len] == ' ')
            count++;
        len++;
    }
	if (input[0] == ' ')
	    count--;
	if (input[len - 1] == ' ')
	    count--;

    return count + 1; // 마지막 단어 포함
}

int main() {
    char input[1000002];
    cin.getline(input, 1000001);

    int wordCount = CountWord(input);
    cout << wordCount << endl;

    return 0;
}