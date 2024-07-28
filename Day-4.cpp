// Remove Duplicates
// https://www.geeksforgeeks.org/problems/remove-duplicates3034/1
class Solution {
  public:
    string removeDups(string str) {
        unordered_map<char, bool> isPresent;
        string ans = "";
        for (char c : str)
        {
            if (isPresent[c]) continue;
            else {
                isPresent[c] = true;
                ans.push_back(c);
            }
        }
        return ans;
    }
};
