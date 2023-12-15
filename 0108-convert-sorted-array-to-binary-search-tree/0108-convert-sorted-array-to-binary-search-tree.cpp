/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    TreeNode* constructbst(vector<int> &nums, int start , int end)
    {
        if(start>end)
            return NULL; 
        
        int mid= (start + end)/2;
        
        TreeNode* root= new TreeNode(nums[mid]); 
        
        root->left= constructbst(nums, start, mid-1);
        root->right=constructbst(nums, mid+1, end);
        
        return root; 

}

    TreeNode* sortedArrayToBST(vector<int>& nums) 
    {
        int n= size(nums);
        if(n==0) 
            return NULL; 
        int start=0;
        int end= n-1;
        
        return constructbst(nums, start, end);
    }
};