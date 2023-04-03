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
    vector<int>treedata;
    void inorder(TreeNode* root)
    {
        if(root==NULL)
            return ;
        inorder(root->left);
        treedata.push_back(root->val);
        inorder(root->right);
        
    }
    
public:
    bool isValidBST(TreeNode* root) {
        inorder(root);
        for(int i=1;i<treedata.size();i++)
        {
            if(treedata[i-1]<treedata[i])
            { 
                continue;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};