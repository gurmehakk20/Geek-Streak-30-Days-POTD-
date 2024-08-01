// Spirally traversing a matrix
// https://www.geeksforgeeks.org/problems/spirally-traversing-a-matrix-1587115621/1

class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int> > &matrix) {
        int i = 0, j = 0;
        int n = matrix.size()-1;
        int m = matrix[0].size()-1;

        vector<int> ans;
        while (i <= n && j <= m){
            for (int ind = j; ind <= m && i <= n && j <= m; ind++) 
                ans.push_back(matrix[i][ind]);
            i++;
            for (int ind = i; ind <= n && i <= n && j <= m; ind++) 
                ans.push_back(matrix[ind][m]);
            m--;
            for (int ind = m; ind >= j && i <= n && j <= m; ind--) 
                ans.push_back(matrix[n][ind]);
            n--;
            for (int ind = n; ind >= i && i <= n && j <= m; ind--) 
                ans.push_back(matrix[ind][j]);
            j++;
        }
        return ans;
    }
};
