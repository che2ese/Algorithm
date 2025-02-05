#include <iostream>
using namespace std;

int main(){
    int T;
    int k, n;
    cin >> T;
    for(int i = 0; i < T; i++){
        cin >> k;
        cin >> n;
        
        int input[k + 1][n];

        for(int x = 0; x < n; x++){
            input[0][x] = x + 1;
        }
        for(int y = 1; y < k + 1; y++){
            for(int x = 0; x < n; x++){
                input[y][x] = 0;
                for(int z = 0; z <= x; z++){
                    input[y][x] += input[y - 1][z];
                }
            }
        }
        cout << input[k][n - 1] << endl;
    }
}