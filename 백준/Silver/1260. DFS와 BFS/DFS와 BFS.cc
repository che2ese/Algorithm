#include <iostream>
#include <vector>
#include <queue>
#include <algorithm> // For sorting

using namespace std;

vector<vector<int>> adjacent;  // 인접 리스트
vector<bool> visited;  // 방문 여부
vector<bool> discovered; // 발견 여부
bool dfsFirst = true;
bool bfsFirst = true;

void Dfs(int here) // 시작점
{
    // 방문 도장
    visited[here] = true;
    
    if(dfsFirst)
    {
        cout << here;
        dfsFirst = false;
    }
    else
        cout << " " << here;  // 방문한 정점 출력

    const int size = adjacent[here].size();
    for (int i = 0; i < size; i++)
    {
        int there = adjacent[here][i];
        if (!visited[there])
            Dfs(there);
    }
}

// 몇 번만에 갈 수 있는지
void Bfs(int here)
{
    queue<int> q;
    q.push(here);
    discovered[here] = true;

    if(bfsFirst)
    {
        cout << here;
        bfsFirst = false;
    }
    else
        cout << " " << here;  // 방문한 정점 출력

    while (!q.empty())
    {
        here = q.front();
        q.pop();

        // 인접 리스트
        int size = adjacent[here].size();
        for (int i = 0; i < size; i++)
        {
            int there = adjacent[here][i];
            if (!discovered[there])
            {
                q.push(there);
                discovered[there] = true;

                if(bfsFirst)
                {
                    cout << there;
                    bfsFirst = false;
                }
                else
                    cout << " " << there;  // 방문한 정점 출력
            }
        }
    }
}

int main()
{
    int N, M, V;
    cin >> N >> M >> V;

    adjacent.resize(N + 1); 
    visited.resize(N + 1, false); 
    discovered.resize(N + 1, false); 

    // 인접 리스트 입력
    for (int i = 0; i < M; i++)
    {
        int a, b;
        cin >> a >> b;
        adjacent[a].push_back(b);
        adjacent[b].push_back(a);
    }

    // 인접 리스트 정렬
    for (int i = 1; i <= N; i++) {
        sort(adjacent[i].begin(), adjacent[i].end());
    }

    Dfs(V); 
    cout << endl;
    Bfs(V);
}