#include <iostream>
using namespace std;
#include <vector>

vector<vector<int>> adjacent;
vector<bool> visited;
int bfs_Count = 0;

void Dfs(int here)
{
    visited[here] = true;
    bfs_Count++;

    const int size = adjacent[here].size();
    for(int i = 0; i < size; i++)
    {
        int there = adjacent[here][i];
        if(!visited[there]) 
            Dfs(there);
    }
}

int main()
{
    int num, input;
    cin >> num;
    cin >> input;

    adjacent = vector<vector<int>>(num + 1);

    visited = vector<bool>(num + 1, false);

    for(int i = 0; i < input; i++)
    {
        int a, b;
        cin >> a >> b;
        adjacent[a].push_back(b);
        adjacent[b].push_back(a);
    }
    
    Dfs(1);
    cout << bfs_Count - 1 << endl;
}