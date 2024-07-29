//Row with max 1s
//https://www.geeksforgeeks.org/problems/row-with-max-1s0023/1

class Solution {
  public:
    int rowWithMax1s(vector<vector<int> > &arr) {
        int mx = 0;
        int n = arr.size();
        int m = arr[0].size();
        int ans = -1;
        for (int i = 0; i < n; i++)
        {
            int cnt = 0;
            for (int j = 0; j < m; j++)
            {
                if (arr[i][j] == 1) cnt++;
            }
            if (mx < cnt)
            {
                ans = i;
                mx = cnt;
            }
        }
        return ans;
    }
};
