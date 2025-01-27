#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N;
    double max = 0;
    double total = 0;

    cin >> N;
    
    double* score = new double[N];
	for(int i = 0; i < N; i++){
		cin >> score[i];
	}
    for(int i = 0; i < N; i++){
        if(score[i] > max){
            max = score[i];
        }
	}
    for(int i = 0; i < N; i++){
        total += score[i];
    }

    cout << fixed << setprecision(6);
    cout << (total / max) * 100 / N << endl;

    delete[] score;
}