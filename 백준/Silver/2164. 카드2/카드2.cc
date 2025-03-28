#include <iostream>
using namespace std;
#include <queue>

int main()
{
    queue<int> queue;
    int N; 
    cin >> N;
    for(int i = 1; i < N + 1; i++)
    {
        queue.push(i);
    }
    while(true)
    {
        if(queue.size() == 1)
        {
            cout << queue.front() << endl;
            break;
        }
        queue.pop();
        int queue_Remove = queue.front();
        queue.push(queue_Remove);
        queue.pop();
    }
}