#include <iostream>
using namespace std;
#include <queue>

int main()
{
    ios_base::sync_with_stdio(false); // C 스타일 입출력과 동기화 비활성화 (입출력 속도 향상)
    cin.tie(nullptr); // cin과 cout의 묶음(Flush)을 해제 (출력 지연 가능)

    queue<int> queue;
    int N; 
    cin >> N;
    for(int i = 0; i < N; i++)
    {
        string str;
        cin >> str;
        
        if(str == "push")
        {
            int input;
            cin >> input;
            queue.push(input);
        }
        else if(str == "pop")
        {
            if(queue.empty())
                cout << -1 << "\n";
            else
            {
                cout << queue.front() << "\n";
                queue.pop();
            }
        }
        else if(str == "size")
        {
            cout << queue.size() << "\n";
        }
        else if(str == "empty")
        {
            cout << (queue.empty() ? 1 : 0) << "\n";
        }
        else if(str == "front")
        {
            cout << (queue.empty() ? -1 : queue.front()) << "\n";
        }
        else if(str == "back")
        {
            cout << (queue.empty() ? -1 : queue.back()) << "\n";
        }
    }
}