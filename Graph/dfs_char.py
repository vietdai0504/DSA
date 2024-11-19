## Miêu tả đồ thị
'''
7 13
A B
A C
A F
B C
B D
D A
D C
E C
E G
F A
F C
G D
G E
'''

adj = {}
edges = 13

is_visited = {}

input_data = [
    "A B", "A C", "A F",
    "B C", "B D", "D A",
    "D C", "E C", "E G",
    "F A", "F C", "G D", "G E"
]

for i in range(edges):
    a, b = input_data[i].split()
    is_visited[a] = is_visited[b] = False
    if a not in adj:
        adj[a] = []
    if b not in adj:
        adj[b] = []
    adj[a].append(b)
    # adj[b].append(a)

print(adj)
dfs_list = []
def dfs(adj, u):
    dfs_list.append(u)
    if u not in adj:
        return
    is_visited[u] = True
    for v in adj[u]:
        if not is_visited[v]:
            dfs(adj,v)
dfs(adj,'G')
print(dfs_list)