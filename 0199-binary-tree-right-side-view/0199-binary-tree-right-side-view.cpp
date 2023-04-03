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
    vector<int>ans;
    void rights(TreeNode* root,int level)
    {
        if(root==NULL)
            return ;
       if(level==ans.size())
           ans.push_back(root->val);
        rights(root->right,level+1);
        rights(root->left,level+1);
        
    }
public:
    vector<int> rightSideView(TreeNode* root)
    {
        int level=0;
        rights(root,level);
        return ans;
    }
};