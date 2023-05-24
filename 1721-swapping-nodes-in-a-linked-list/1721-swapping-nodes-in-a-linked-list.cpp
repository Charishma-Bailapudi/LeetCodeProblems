/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k)
    {
        vector<int>v;
        while(head!=NULL)
        {
            v.push_back(head->val);
            head=head->next;
        }
        int n=v.size()-k;
        int temp=v[k-1];
        v[k-1]=v[n];
        v[n]=temp;
         ListNode* ans=new  ListNode(0);
         ListNode* res=ans;
        for(int i:v)
        {
            res->next=new  ListNode(i);
            res=res->next;
        }
        return ans->next;
        
    }
};