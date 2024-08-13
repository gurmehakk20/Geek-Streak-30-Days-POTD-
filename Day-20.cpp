// Square root of a number
// https://www.geeksforgeeks.org/problems/square-root/1

class Solution {
  public:
    long long int floorSqrt(long long int n) {
        
        // Your code goes here
        if (n == 1 || n == 0) return n;
        long long low = 1;
        long long high = n;
        long long ans;
        
        while (low <= high)
        {
            long long mid = (low + high) >> 1;
            if (mid * mid <= n)
            {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        
        return ans;
    }
};
