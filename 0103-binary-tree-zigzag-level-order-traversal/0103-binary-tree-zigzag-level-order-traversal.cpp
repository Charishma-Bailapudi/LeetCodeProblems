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
        int flag=0;
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
            if(flag==0)
            {
                level.push_back(sub);
                flag=1;
            }
            else if(flag==1)
            {
                reverse(sub.begin(),sub.end());
                level.push_back(sub);
                flag=0;
            }
            
        }
    }
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
         levelord(root);
        return level;
    }
};