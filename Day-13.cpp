// Validate an IP Address
// https://www.geeksforgeeks.org/problems/validate-an-ip-address-1587115621/1

class Solution {
  public:
    int isValid(string str) {
        // code here
        int n = str.length();
        int dots = 0;
        string curr = "";
        for (int i = 0; i < n; i++)
        {
            while (i < n && str[i] != '.')
            {
                curr += str[i];
                i++;
            }
            if (str[i] == '.') dots++;
            int num = stoi(curr);
            if (num > 255) return 0;
            curr= "";
        }
        
        return (dots == 3);
    }
};
