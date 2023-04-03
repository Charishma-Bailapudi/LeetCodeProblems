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
    vector<vector<int>> level;
    queue<TreeNode*> que;
    void levelord(TreeNode* root)
    {
        if(root==NULL)
            return;
        que.push(root);
        while(!que.empty())
        {
            int size = que.size();
            vector<int> sub;
            for(int i=0;i<size;i++)
            {
                TreeNode* curr = que.front();
                que.pop();
                sub.push_back(curr->val);
                if(curr->left!=NULL)
                {
                    que.push(curr->left);
                }
                if(curr->right!=NULL)
                {
                    que.push(curr->right);
                }
            }
            level.push_back(sub);
        }
    }
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        levelord(root);
        return level;
    }
};
