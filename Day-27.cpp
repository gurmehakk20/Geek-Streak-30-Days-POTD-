// Burning Tree
// https://www.geeksforgeeks.org/problems/burning-tree/1

class Solution {
private:
    unordered_map<int, vector<int>> graph;
    void convert(Node* root, Node* parent)
    {
        if (!root) return;
        
        if (parent)
        {
            graph[root -> data].push_back(parent -> data);
        }
        
        if (root -> left)
        {
            graph[root -> data].push_back(root -> left -> data);
            convert(root -> left, root);
        }
        
        if (root -> right)
        {
            graph[root -> data].push_back(root -> right -> data);
            convert(root -> right, root);   
        }
    }
    
    vector<bool > vis;
    
    int bfs(Node* root, int target)
    {
        if (!root) return 0;
        
        queue<pair<int, int> > q;
        q.push({target, 0});
        int ans = 0;
        
        while (!q.empty())
        {
            auto f = q.front();
            int node = f.first;
            int cnt = f.second;
            
            q.pop();
            
            vis[node] = true;
            
            int curr = 0;
            for (auto child : graph[node])
            {
                if (!vis[child])
                {
                    q.push({child, cnt+1});
                    ans = max(ans, cnt+1);
                }
            }
        }
        return ans;
    }
public:

    int minTime(Node* root, int target) 
    {
        // Your code goes here
        vis.assign(100001, false);
        convert(root, NULL);
        
        return bfs(root, target);
    }
};
