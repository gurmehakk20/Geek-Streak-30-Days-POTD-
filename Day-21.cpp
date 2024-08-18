// Longest Common Substring
// https://www.geeksforgeeks.org/problems/longest-common-substring1452/1

class Solution {
  public:
    int longestCommonSubstr(string str1, string str2) {
        // your code here
        
        int m = str1.length();
        int n = str2.length();
        int ans = 0;
        vector<vector<int>>dp(m+1, vector<int> (n+1));
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (str1[i-1] == str2[j-1])
                {
                    dp[i][j] = 1 + dp[i-1][j-1];
                    ans = max(ans, dp[i][j]);
                }
                else dp[i][j] = 0;
            }
        }
        return ans;
        
    }
};
