// Array to BST
// https://www.geeksforgeeks.org/problems/array-to-bst4443/1

class Solution {
private:
    Node* helper(vector<int>& nums, int low, int high)
    {
        if (low > high) return NULL;
        
        int mid = (low + high) >> 1;
        Node* nd =  new Node(nums[mid]);
        
        nd -> left = helper(nums, low, mid-1);
        nd -> right = helper(nums, mid+1, high);
        
        return nd;
        
    }
  public:
    Node* sortedArrayToBST(vector<int>& nums) {
        // Code here
        int n = nums.size();
        int low = 0, high = n-1;
        int mid = (low + high) >> 1;
        Node* root = new Node(nums[mid]);
        
        root -> left = helper(nums, low, mid-1);
        root -> right = helper(nums, mid+1, high);
        
        return root;
        
    }
};
