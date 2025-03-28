#include <iostream>
using namespace std;
#include <stack>

int main()
{
    ios_base::sync_with_stdio(false); // C 스타일 입출력과 동기화 비활성화 (입출력 속도 향상)
    cin.tie(nullptr); // cin과 cout의 묶음(Flush)을 해제 (출력 지연 가능)
    cout.tie(nullptr); // cout과 cin의 묶음도 해제 (거의 사용 안 함)

    stack<int> stack;
    int N;
    cin >> N;
    for(int i = 0; i < N; i++)
    {
        int input;
        cin >> input;

        if (input == 1)
        {
            int num;
            cin >> num;
            stack.push(num);
        }
        else if (input == 2)
        {
            if (stack.empty())
                cout << -1 << "\n";
            else
            {
                cout << stack.top() << "\n";
                stack.pop();
            }
        }
        else if (input == 3)
        {
            cout << stack.size() << "\n";
        }
        else if (input == 4)
        {
            cout << (stack.empty() ? 1 : 0) << "\n";
        }
        else if (input == 5)
        {
            cout << (stack.empty() ? -1 : stack.top()) << "\n";
        }
    }
}