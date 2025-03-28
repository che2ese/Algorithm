#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> stack;
    int N;
    cin >> N;
    
    for (int i = 0; i < N; i++)
    {
        string str;
        cin >> str;
        
        if (str == "push")
        {
            int input;
            cin >> input;
            stack.push(input);
        }
        else if (str == "pop")
        {
            if (stack.empty())
                cout << -1 << endl;  // 스택이 비어있으면 -1 출력
            else
            {
                cout << stack.top() << endl;
                stack.pop();
            }
        }
        else if (str == "size")
        {
            cout << stack.size() << endl;
        }
        else if (str == "empty")
        {
            cout << (stack.empty() ? 1 : 0) << endl;
        }
        else if (str == "top")
        {
            if (stack.empty())
                cout << -1 << endl;  // 스택이 비어있으면 -1 출력
            else
                cout << stack.top() << endl;
        }
    }
}