// Maximize The Cut Segments
// https://www.geeksforgeeks.org/problems/cutted-segments1642/1

class Solution
{
    public:
    vector<int> dp;
    int helper(int n, int x, int y, int z)
    {
        if (n == 0) return 0;
        if (n < 0) return INT_MIN;
        
        if (dp[n]!= -1) return dp[n];
        
        int op1 = helper(n-x, x, y, z);
        int op2 = helper(n-y, x, y, z);
        int op3 = helper(n-z, x, y, z);
        
        return dp[n] = 1+max(op1, max(op2, op3));
        
    }
    int maximizeTheCuts(int n, int x, int y, int z)
    {
        //Your code here
        dp.assign(n+1, -1);
        return max(0, helper(n, x, y, z));
    }
};
