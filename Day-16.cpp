// Maximize Array Value After Rearrangement
// https://www.geeksforgeeks.org/problems/maximize-arrii-of-an-array0026/1

class Solution {
  public:
    #define mod 1000000007
    int Maximize(vector<int> &arr) {
        // Complete the function
        sort(arr.begin(), arr.end());
        long long ans = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            ans += ((long long) i * (long long)arr[i]);
        }
        
        return (int)(ans%mod);
    }
};
