// Split an array into two equal Sum subarrays
// https://www.geeksforgeeks.org/problems/split-an-array-into-two-equal-sum-subarrays/1

class Solution {
  public:
    bool canSplit(vector<int>& arr) {
        // code here
        int sum = 0;
        for (int u : arr) sum += u;
        if (sum%2) return false;
        int half = sum/2;
        int curr = 0;
        int n = arr.size();
        for (int i = 0; i < n; )
        {
            curr += arr[i];
            if (curr == half) return true;
            i++;
        }
        
        return false;
    }
};
