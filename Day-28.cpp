// Shortest path in Undirected Graph
// https://www.geeksforgeeks.org/problems/shortest-path-in-undirected-graph-having-unit-distance/1

class Solution {
  public:
    vector<int> shortestPath(vector<vector<int>>& edges, int n,int m, int src){
        // code here
        vector<vector<int>> graph(n);
        for (auto edge : edges)
        {
            int u = edge[0];
            int v = edge[1];
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        
        queue<pair<int, int>> q;
        q.push({src, 0});
        vector<int> res(n, INT_MAX);
        vector<bool> vis(n, false);
        
        // BFS
        while (!q.empty())
        {
            auto front = q.front();
            int node = front.first;
            int wt = front.second;
            res[node] = min(res[node], wt);
            q.pop();
            vis[node] = true;
            
            for (auto child : graph[node])
            {
                if (!vis[child])
                q.push({child, wt+1});
            }
        }
        
        for (int &r : res) if (r == INT_MAX) r = -1;
        
        return res;
    }
};
