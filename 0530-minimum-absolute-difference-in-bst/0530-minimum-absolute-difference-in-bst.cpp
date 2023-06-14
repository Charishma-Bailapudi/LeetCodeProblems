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
    vector<int> vals;
    void inorder(TreeNode* root)
    {
        if(root==NULL)
            return;
        inorder(root->left);
        vals.push_back(root->val);
        inorder(root->right);
    }
    int getMinimumDifference(TreeNode* root)
    {
         inorder(root);
        int minDiff = INT_MAX;
        for(int i=0;i<vals.size()-1;i++)
        {
            minDiff = min(minDiff,abs(vals[i]-vals[i+1]) );
        }
        return minDiff;
        
    }
};