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
    ListNode* removeNodes(ListNode* head)
    {
        vector<int>v;
        while(head!=NULL)
        {
            v.push_back(head->val);
            head=head->next;
        }
       int n = v.size();
       int maxRight = v[n - 1]; 

       for (int i = n - 2; i >= 0; i--)
       {
        if (v[i] < maxRight) 
        {
            // cout<<"lala:"<<v[i]<<endl;
            v.erase(v.begin() + i);
        } 
           else 
        {
            maxRight = v[i];
        }
       }
        
        ListNode*res=new ListNode(0);
        ListNode*l1=res;
        for(int i:v)
        {
            l1->next=new ListNode(i);
            l1=l1->next;
        }
        return res->next;
    }
};