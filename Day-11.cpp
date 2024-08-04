// N meetings in one room
// https://www.geeksforgeeks.org/problems/n-meetings-in-one-room-1587115620/1

class Solution {
  public:
    int maxMeetings(int n, int start[], int end[]) {
        vector< pair<int, int> > pairs;
        for (int i = 0; i < n; i++)
        {
            pairs.push_back({end[i], start[i]});
        }
        sort(pairs.begin(), pairs.end());
        int ans = 0;
        int prevEnd = -1;
        for (int i = 0; i < n; i++)
        {
            if (pairs[i].second > prevEnd)
            {
                ans++;
                prevEnd = pairs[i].first;
            }
        }
        return ans;
    }
};
