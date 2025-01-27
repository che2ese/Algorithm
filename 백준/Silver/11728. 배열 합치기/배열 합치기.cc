#include <iostream>
using namespace std;

/* 
    버블 정렬은 시간복잡도 측면에서 병합 정렬로 구현해야한다.
    둘이 합친 배열이기 때문에 시간복잡도가 O((N+M)^2
    따라서 배열 2개를 따로 만들어야함.  
*/

int main() {
    int N, M;
    cin >> N >> M;

    int* ary1 = new int[N];
    int* ary2 = new int[M];
    int* merged = new int[N + M];

    for (int i = 0; i < N; i++) {
        cin >> ary1[i];
    }
    for (int i = 0; i < M; i++) {
        cin >> ary2[i];
    }

    int i = 0, j = 0, k = 0;

    while (i < N && j < M) {
        if (ary1[i] <= ary2[j]) {
            merged[k++] = ary1[i++];
        } else {
            merged[k++] = ary2[j++];
        }
    }
    while (i < N) {
        merged[k++] = ary1[i++];
    }
    while (j < M) {
        merged[k++] = ary2[j++];
    }

    for (int i = 0; i < N + M; i++) {
        if (i > 0) cout << " ";
        cout << merged[i];
    }

    delete[] ary1;
    delete[] ary2;
    delete[] merged;
}

	
    /*
    int* ary = new int[N+M];
	for(int i = 0; i < N; i++){
		cin >> ary[i];
	}
	for(int i = 0; i < M; i++){
		cin >> ary[i+N];
	}
    
	for (int i = 0; i < N + M - 1; i++) {
        for (int j = 0; j < N + M - 1 - i; j++) {  
            if (ary[j] > ary[j + 1]) { 
                int tmp = ary[j];
                ary[j] = ary[j + 1];
                ary[j + 1] = tmp;
            }
        }
    }
	for(int i = 0; i < N + M; i++){
		if(i == 0){
			cout << ary[i];
		}
		else{
			cout << " " << ary[i];
		}
	}
    delete[] ary;
    */