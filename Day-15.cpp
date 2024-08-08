// Sum Tree
// https://www.geeksforgeeks.org/problems/sum-tree/1

class Solution
{
    private:
    pair<bool, int> isSumTreeFast(Node* root)
    {
        if (root == NULL)
        {
            pair<bool, int> p = make_pair(true, 0);
            return p;
        }
        
        if (root -> left == NULL && root -> right == NULL){
            pair<bool, int> p = make_pair(true, root -> data);
            return p;
        }
        
        pair<bool, int> left = isSumTreeFast(root -> left);
        pair<bool, int> right = isSumTreeFast(root -> right);
        
        pair<bool, int> ans;
        bool lc  = left.first;
        bool rc = right.first;
        bool cond = left.second + right.second == root->data;
        
        if (lc && rc && cond){
            ans.first = true;
            ans.second = 2*root->data;
        } else {
            ans.first = false;
        }
        
        return ans;
        
    }
    public:
    bool isSumTree(Node* root)
    {
        return isSumTreeFast(root).first;
    }
};
