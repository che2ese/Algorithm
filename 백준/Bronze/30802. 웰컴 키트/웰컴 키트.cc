#include <iostream>
using namespace std;

int main(){
    int N;
    int size[6];
    int T, P;
    int countSize = 0;
    int bundlePen = 0;
    int countPen = 0;

    cin >> N;
    for(int i = 0; i < 6; i++){
        cin >> size[i];
    }
    cin >> T >> P;
    for(int i = 0; i < 6; i++){
        countSize += (size[i] + T - 1) / T;  // 올림 계산
    }
    bundlePen = N / P;
    countPen = N % P;
    cout << countSize << endl;
    cout << bundlePen << " "<< countPen << endl;
}