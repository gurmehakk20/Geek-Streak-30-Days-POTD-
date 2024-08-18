// Product array puzzle
// https://www.geeksforgeeks.org/problems/product-array-puzzle4525/1

class Solution {
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums) {

        // code here
        int n = nums.size();
        long long mul = 1;
        int zeros = 0;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 0) zeros++;
            else mul *= nums[i];
        }
        
        vector<long long> res(n, 0);
        if (zeros >= 2) return res;
        if (zeros == 1) {
            for (int i = 0; i < n; i++) if (nums[i] == 0) res[i] = mul;
            return res;
        }
        for (int i = 0; i < n; i++)
        {
            res[i] = mul/nums[i];
        }
        
        return res;
    }
};
