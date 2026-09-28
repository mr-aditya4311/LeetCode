class Solution:
    def validPath(self, n: int, edges: list[list[int]], source: int, destination: int) -> bool:
        adj = [[] for _ in range(n)]
        for u, v in edges:
            adj[u].append(v)
            adj[v].append(u)
            
        vis = [0] * n
        q = [source]
        vis[source] = 1
        
        while len(q) > 0:
            x = q.pop(0)
            for y in adj[x]:
                if vis[y] == 0:
                    vis[y] = 1
                    q.append(y)
                    
        return vis[destination] == 1