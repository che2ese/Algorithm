#include <iostream>
using namespace std;

int Max(int a, int b){
    return (a > b) ? a : b;
}
void result(int lo, int mi, int sh){
    if(lo * lo == (mi * mi + sh * sh))
        cout << "right" << endl;
    else
        cout << "wrong" << endl;
}

int main(){
    int a, b, c;
    while(true){
        cin >> a >> b >> c;

        if(a == 0 && b == 0 && c == 0)
            break;
            
        int max = Max(Max(a, b), c);
        
        if(max == a){
            result(a, b, c);
        }
        else if(max == b){
            result(b, c, a);
        }
        else if(max == c){
            result(c, a, b);
        }        
    }
}