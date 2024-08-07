// K-th element of two Arrays
// https://www.geeksforgeeks.org/problems/k-th-element-of-two-sorted-array1317/1

int kthElement(int k, vector<int>& arr1, vector<int>& arr2) {
        int i = 0, j = 0;
        int n = arr1.size();
        int m = arr2.size();
        while (k > 1 && i < n && j < m)
        {
            if (arr1[i] < arr2[j]) i++;
            else j++;
            k--;
        }
        while (k > 1 && i < n) {
            i++;
            k--;
        }
        while (k > 1 && j < m) {
            j++;
            k--;
        }
        if (i < n && j < m)
        return min(arr1[i], arr2[j]);
        
        if (i < n) return arr1[i];
        
        return arr2[j];
    }
