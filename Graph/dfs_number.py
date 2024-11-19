'''
- Miêu tả đồ thị:
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
'''

vertices = 7
edges = 7

input_data = [
    "0 1",
    "0 2",
    "0 3",
    "1 4",
    "1 5",
    "2 6",
    "3 7"
]

adj = [[] for _ in range(vertices + 1)]
is_visited = {}
for i in range(edges):
    a, b = map(int, input_data[i].split())
    adj[a].append(b)
    adj[b].append(a)
    is_visited[a] = is_visited[b] = False

print(adj)
dfs_list = []
def dfs(adj, u):
    dfs_list.append(u)
    is_visited[u] = True
    for v in adj[u]:
        if not is_visited[v]:
            dfs(adj,v)
dfs(adj,0)
print(dfs_list)