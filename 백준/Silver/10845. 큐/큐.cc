#include <iostream>
using namespace std;
#include <queue>

int main()
{
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
                cout << -1 << endl;
            else
            {
                cout << queue.front() << endl;
                queue.pop();
            }
        }
        else if(str == "size")
        {
            cout << queue.size() << endl;
        }
        else if(str == "empty")
        {
            cout << (queue.empty() ? 1 : 0) << endl;
        }
        else if(str == "front")
        {
            cout << (queue.empty() ? -1 : queue.front()) << endl;
        }
        else if(str == "back")
        {
            cout << (queue.empty() ? -1 : queue.back()) << endl;
        }
    }
}