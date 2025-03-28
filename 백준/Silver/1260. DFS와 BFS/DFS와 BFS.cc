#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

// 인접 리스트를 저장할 벡터
vector<vector<int>> adjacent;  
// DFS에서 각 정점의 방문 여부를 추적할 벡터
vector<bool> visited;  
// BFS에서 각 정점의 방문 여부를 추적할 벡터
vector<bool> discovered; 
// DFS의 첫 번째 방문 여부를 체크하는 변수
bool dfsFirst = true; 
// BFS의 첫 번째 방문 여부를 체크하는 변수
bool bfsFirst = true; 

// 깊이 우선 탐색 (DFS) 함수
void Dfs(int here) // 시작점
{
    // 현재 정점 방문 처리
    visited[here] = true;
    
    // 첫 번째 방문인 경우에는 공백 없이 출력
    if(dfsFirst)
    {
        cout << here;
        dfsFirst = false; // 첫 번째 방문 이후에는 공백을 추가할 준비
    }
    else
        cout << " " << here;  // 그 이후에는 공백을 추가하여 방문한 정점 출력

    // 현재 정점과 연결된 인접 정점들에 대해 탐색
    const int size = adjacent[here].size();  // 현재 정점과 연결된 정점들의 수
    for (int i = 0; i < size; i++)
    {
        int there = adjacent[here][i];  // 연결된 다른 정점
        if (!visited[there])  // 아직 방문하지 않은 정점이라면
            Dfs(there);  // 그 정점에 대해 DFS 호출 (재귀)
    }
}

// 너비 우선 탐색 (BFS) 함수
void Bfs(int here)
{
    // BFS에서 사용할 큐 선언
    queue<int> q;
    // 시작 정점을 큐에 넣음
    q.push(here);
    // 시작 정점 방문 처리
    discovered[here] = true;

    // 첫 번째 방문인 경우에는 공백 없이 출력
    if(bfsFirst)
    {
        cout << here;
        bfsFirst = false;  // 첫 번째 방문 이후에는 공백을 추가할 준비
    }
    else
        cout << " " << here;  // 그 이후에는 공백을 추가하여 방문한 정점 출력

    // 큐가 비어있지 않으면 계속 탐색
    while (!q.empty())
    {
        // 큐에서 첫 번째 정점 꺼냄
        here = q.front();
        q.pop();  // 꺼낸 정점은 큐에서 제거

        // 현재 정점과 연결된 인접 정점들에 대해 탐색
        int size = adjacent[here].size();  // 현재 정점과 연결된 정점들의 수
        for (int i = 0; i < size; i++)
        {
            int there = adjacent[here][i];  // 연결된 다른 정점
            if (!discovered[there])  // 아직 방문하지 않은 정점이라면
            {
                q.push(there);  // 큐에 그 정점을 넣음
                discovered[there] = true;  // 그 정점 방문 처리

                // 첫 번째 방문인 경우에는 공백 없이 출력
                if(bfsFirst)
                {
                    cout << there;
                    bfsFirst = false;  // 첫 번째 방문 이후에는 공백을 추가할 준비
                }
                else
                    cout << " " << there;  // 그 이후에는 공백을 추가하여 방문한 정점 출력
            }
        }
    }
}

int main()
{
    int N, M, V;
    // N: 정점의 수, M: 간선의 수, V: 시작 정점
    cin >> N >> M >> V;

    // 인접 리스트 크기 조정 (1번부터 N번까지 사용)
    adjacent.resize(N + 1); 
    // 방문 여부 배열 초기화
    visited.resize(N + 1, false); 
    // 발견 여부 배열 초기화
    discovered.resize(N + 1, false); 

    // 간선 정보 입력
    for (int i = 0; i < M; i++)
    {
        int a, b;
        cin >> a >> b;
        // 양방향 간선이므로 양쪽에 추가
        adjacent[a].push_back(b);
        adjacent[b].push_back(a);
    }

    // 인접 리스트를 작은 번호부터 방문하기 위해 정렬
    for (int i = 1; i <= N; i++) {
        sort(adjacent[i].begin(), adjacent[i].end());
    }

    // DFS 탐색 시작
    Dfs(V); 
    cout << endl;  // DFS 탐색 후 줄바꿈

    // BFS 탐색 시작
    Bfs(V);
}
