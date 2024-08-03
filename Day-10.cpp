// The Celebrity Problem
// https://www.geeksforgeeks.org/problems/the-celebrity-problem/1

class Solution {
  public:
    int celebrity(vector<vector<int> >& mat) {
        int n = mat.size();
        if (n == 1) return 0;
        vector<vector<int>> known(n);
        vector<int> count(n, 0);
        
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (mat[i][j] == 1)
                {
                    known[i].push_back(j);
                    count[j]++;
                }
            }
        }
        
        for (int i = 0; i < n; i++)
        {
            if (count[i] == n-1)
            {
                if (known[i].size() == 0) return i;
            }
        }
        
        return -1;
    }
};
