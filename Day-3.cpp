// Form a palindrome
https://www.geeksforgeeks.org/problems/form-a-palindrome1455/1

class Solution{
  public:
    vector<vector<int>> dp;
    int lcs(string str, string rev, int m, int n)
    {
        if (m == 0 || n == 0)
        {
            return 0;
        }
        if (dp[n][m] != -1) return dp[n][m];

        if (str[m-1] == rev[n-1])
        {
            return dp[n][m] =  1 + lcs(str, rev, m-1, n-1);
        }
        
        return dp[n][m] = max(lcs(str, rev, m-1, n), lcs(str, rev, m, n-1));
        
    }
    int countMin(string str){
        string rev = str;
        reverse(rev.begin(), rev.end());
        int n = str.size();
        
        dp.assign(n+1, vector<int>(n+1, -1));
        int chars = lcs(str, rev, n, n);
        return n-chars;
    }
