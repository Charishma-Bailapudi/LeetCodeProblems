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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) 
    {
         if(preorder.empty()||inorder.empty())
         {
            return NULL;
        }
        TreeNode*root= new TreeNode(preorder[0]);
        
        auto itr = find(inorder.begin(), inorder.end(), preorder[0]);
        
        preorder=vector<int>(preorder.begin() + 1, preorder.end());
        
        vector<int> inorder1=vector<int>(inorder.begin(), itr);
        vector<int> inorder2=vector<int>(itr+1, inorder.end());
        
        root->left=buildTree(preorder,inorder1);
        root->right=buildTree(preorder,inorder2);
        return root;
    }
};