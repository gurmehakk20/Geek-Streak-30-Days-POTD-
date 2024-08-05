// Bottom View of Binary Tree
// https://www.geeksforgeeks.org/problems/bottom-view-of-binary-tree/1

class Solution {
  public:
    vector <int> bottomView(Node *root) {
        // Your Code Here
        vector<int> res;
        map<int, Node*> mp;
        queue<pair<Node*, int> > q;
        q.push({root, 0});
        
        while (!q.empty())
        {
            pair<Node*, int> p = q.front();
            Node* f = p.first;
            int dis = p.second;
            q.pop();
            mp[dis] = f;
            if (f -> left)
            {
                q.push({f -> left, dis-1});
            }
            if (f -> right)
            {
                q.push({f -> right, dis+1});
            }
        }
        
        for (auto m : mp) {
            res.push_back(m.second->data);
        }

        
        return res;
    }
};
