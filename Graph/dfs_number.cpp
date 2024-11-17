/*
Miêu tả đồ thị:
7 7 -> số đỉnh, số cạnh
---
0 1
0 2
0 3
1 4
1 5
2 6
3 7
---
-> các cạnh
*/

#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

vector<int> adj[1001];
bool is_visited[1000];

void dfs(int u) {
    cout << u << " ";
    is_visited[u] = true;
    for (int v:adj[u]) {
        if (!is_visited[v]) {
            dfs(v);
        }
    }
}

int main() {
    memset(is_visited, false, sizeof(is_visited));
    const int n=7, m=7;
    for (int i=0;i<m;i++) {
        int x, y; cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    dfs(0);
}