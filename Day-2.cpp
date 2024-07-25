// K-Pangrams
// https://www.geeksforgeeks.org/problems/k-pangrams0909/1

class Solution {
  public:
    bool kPangram(string str, int k) {
        // code here
        int n = str.length();
        if (n < 26) return false;
        
        unordered_map<char, int> count;
        int spaces = 0, extras = 0;
        
        for (char c : str)
        {
            if (c == ' ') spaces ++;
            else {
                if (count[c] >= 1) extras++;
                count[c]++;
            }
        }
        
        int chars = n-spaces;
        if (chars < 26) return false;
        chars -=extras;
        if (chars + k >= 26) return true;
        return false;
    }
};
