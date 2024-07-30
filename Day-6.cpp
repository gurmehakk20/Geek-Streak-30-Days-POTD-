// Rat in a Maze Problem - I
// https://www.geeksforgeeks.org/problems/rat-in-a-maze-problem/1

class Solution {
private:
    string str = "";
    int n;
    vector<string> res;
    vector<vector<bool>> vis;
    void helper(vector<vector<int>> &mat, int r, int c)
    {
        if (r < 0 || c < 0 || r >= n || c >= n || mat[r][c] == 0 || vis[r][c])
        {
            return;
        }
        if (r == n-1 && c == n-1)
        {
            res.push_back(str);
            return;
        }
        
        vis[r][c] = true;
        
        str.push_back('D');
        helper(mat, r+1, c);
        str.pop_back();
        
        str.push_back('R');
        helper(mat, r, c+1);
        str.pop_back();
        
        str.push_back('U');
        helper(mat, r-1, c);
        str.pop_back();
        
        str.push_back('L');
        helper(mat, r, c-1);
        str.pop_back();
        
        vis[r][c] = false;
        
    }
public:
    vector<string> findPath(vector<vector<int>> &mat) {
        // Your code goes here
        n = mat.size();
        vis.assign(n, vector<bool>(n, false));
        if (mat[n-1][n-1] == 0 || mat[0][0] == 0) return res;
        
        helper(mat, 0, 0);
        return res;
        
    }
};
