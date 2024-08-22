// Alien Dictionary
// https://www.geeksforgeeks.org/problems/alien-dictionary/1

class Solution{
    public:
    string findOrder(string dict[], int n, int k) {

        unordered_map<char, int> indegree;
        unordered_map<char, vector<char>> nbr;
        for (int i = 0; i < n-1; i++)
        {
            string s1 = dict[i];
            string s2 = dict[i+1];
            int m = min(s1.length(), s2.length());
            
            int j = 0;
            while (j < m)
            {
                if (s1[j] != s2[j]) break;
                j++;
            }

            if (j != m){
                
                indegree[s2[j]]++ ;
                nbr[s1[j]].push_back(s2[j]);
            }
        }
        
        queue<char> q;
        for (int i = 0; i < k; i++)
        {
            char c = 'a' + i;
            if (indegree[c] == 0) q.push(c);
        }
        
        string ans = "";
        while (!q.empty())
        {
            char f = q.front();
            q.pop();
            for (char c : nbr[f])
            {
                indegree[c] --;
                if (indegree[c] == 0) q.push(c);
            }
            
            ans.push_back(f);
            
        }
        
        return ans;   
    }
};
