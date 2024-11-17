/*
Miêu tả đồ thị:
6 5
A B
A C 
A D
C E
D F
*/
#include <iostream>
#include <unordered_map>
#include <cstring>
#include <vector>
using namespace std;

unordered_map<char, vector<char>> adj;
unordered_map<char, bool> is_visited;

void dfs(char u) {
    cout << u << " ";
    is_visited[u] = true;
    for (char v:adj[u]) {
        if (!is_visited[v]) {
            dfs(v);
        }
    }
}

int main() {
    int n=6, m=5;
    for (char c = 'A'; c < 'A' + n;c++) {
        is_visited[c] = false;
    }
    for (int i=0;i<m;i++) {
        char x, y; cin >> x >> y;
        adj[x].push_back(y);
    }
    dfs('A');
    cout << endl;
    for (const auto& entry:adj) {
        cout << entry.first << " ";
        for (char c : entry.second) {
            cout << c << " ";
        }
        cout << endl;
    }
}