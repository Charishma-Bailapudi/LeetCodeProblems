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
    ListNode* mergeKLists(vector<ListNode*>& lists)
    {
        vector<int>v;
        for(auto i:lists)
        {
            while(i!=NULL)
            {
                v.push_back(i->val);
                i=i->next;
            }
        }
         sort(v.begin(),v.end());
        ListNode*ans=new ListNode(0);
         ListNode*res=ans;
        for(int j:v)
        {
           res->next=new ListNode(j);
           res=res->next;
        }
       return ans->next; 
    }
};