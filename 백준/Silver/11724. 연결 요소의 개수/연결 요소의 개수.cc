#include <iostream>
using namespace std;
#include <vector>

vector<vector<int>> adjacent;
vector<bool> visited;

void Dfs(int here)
{
    visited[here] = true;

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
    int N, M;
    int count = 0;
    
    cin >> N >> M;
    adjacent.resize(N + 1);
    visited = vector<bool>(N + 1, false);

    for(int i = 0; i < M; i++)
    {
        int a, b;
        cin >> a >> b;
        adjacent[a].push_back(b);
        adjacent[b].push_back(a);
    }
    for (int i = 1; i < N + 1; i++)
	{
		if (visited[i] == false)
        {
			Dfs(i);
            count++;
        }
	}
    cout << count << endl;
}