// Miêu tả đồ thị ở dfs
/*
0 1
0 2
0 3
1 4
1 5
2 6
3 7
*/

#include <iostream>
#include <queue>
#include<cstring>
#include <queue>

using namespace std;

bool is_visited[1001];
vector<int> adj[1001];

void bfs(int u) {
    queue<int> q;
    q.push(u);
    is_visited[u] = true;
    while (!q.empty()) {
        int v = q.front();
        q.pop();
        cout << v << " ";
        for (int x:adj[v]) {
            if (!is_visited[x]) {
                q.push(x);
                is_visited[x] = true;
            }
        }
    }
}

int main() {
    memset(is_visited, false, sizeof(is_visited));
    int n=7, m=7;
    for (int i=0;i<m;i++) {
        int x ,y; cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    bfs(0);
}