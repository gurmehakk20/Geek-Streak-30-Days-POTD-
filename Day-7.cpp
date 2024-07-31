// Longest Common Prefix of Strings
// https://www.geeksforgeeks.org/problems/longest-common-prefix-in-an-array5129/1

class Solution {
  public:

    string longestCommonPrefix(vector<string> arr) {
        // your code here
        string ans = "";
        int n = arr.size();
        int mini = n+1;
        if (n == 1) return arr[0];
        for (int i = 1; i < n; i++)
        {
            string s = arr[i];
            for (int j = 0; j < s.length(); j++)
            {
                if (s[j] != arr[0][j])
                {
                    mini = min(mini, j-1);
                    break;
                }
            }
        }
        if (mini == -1) return "-1";
        return arr[0].substr(0, mini+1);
    }
};
