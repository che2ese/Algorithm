#include <iostream>
using namespace std;
#include <vector>
#include <stack>

int main()
{
    int K;
    int sum = 0;
    stack<int> stack;
    cin >> K;
    for (int i = 0; i < K; i++)
    {
        int num;
        cin >> num;
        if (num == 0)
            stack.pop();
        else
            stack.push(num);
    }

    while (!stack.empty())
    {
        sum += stack.top();
        stack.pop();
    }

    cout << sum << endl;
}