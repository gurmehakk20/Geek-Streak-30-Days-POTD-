// Median of two sorted arrays
// https://www.geeksforgeeks.org/problems/sum-of-middle-elements-of-two-sorted-arrays2305/1
class Solution {
  public:
    int SumofMiddleElements(vector<int> &arr1, vector<int> &arr2) {
        // code here
        int i = 0, j = 0;
        int n = arr1.size();
        int idx1 = n-1, idx2 = n;
        int curr = 0;
        int sum = 0;
        
        
        while (curr <= n && i < n && j < n)
        {
            
            if (arr1[i] < arr2[j])
            {
                curr++;
                
                if (curr == n){
                    sum += arr1[i];
                    // cout << arr1[i] << " ";
                }
                if (curr == n+1){ 
                    sum += arr1[i]; 
                    // cout << arr1[i] << " ";
                    break;
                }
                i++;
            }
            else 
            {
                curr++;
                
                if (curr == n){
                    sum += arr2[j];
                    // cout << arr2[j] << " ";
                }
                if (curr == n+1){ 
                    sum += arr2[j]; 
                    // cout << arr2[j] << " ";
                    break;
                }
                j++;
            }
        }
        
        while (curr <= n && i < n)
        {
            curr++;
            if (curr == n){
                sum += arr1[i];
                // cout << arr1[i] << " ";
            }
            if (curr == n+1){ 
                sum += arr1[i]; 
                // cout << arr1[i] << " ";
                break;
            }
            i++;
            
        }
        while (curr <= n && j < n)
        {
            curr++;
                
            if (curr == n){
                sum += arr2[j];
                // cout << arr2[j] << " ";
            }
            if (curr == n+1){ 
                sum += arr2[j]; 
                // cout << arr2[j] << " ";
                break;
            }
            j++;
            
        }
        
        return sum;
    }
};
