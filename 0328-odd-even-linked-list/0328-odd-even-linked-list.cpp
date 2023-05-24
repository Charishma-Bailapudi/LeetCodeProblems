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
    ListNode* oddEvenList(ListNode* head)
    {
         if (head == nullptr || head->next == nullptr)
            return head;
        vector<int>v;
        int count=0;
        ListNode* curr=head;
        while(curr!=NULL)
        {
           v.push_back(curr->val);
            curr=curr->next; 
        }
         ListNode* res=new ListNode(0);
         ListNode* ans=res;
         ListNode* res1=new ListNode(0);
         ListNode* ans1=res1;
        for(int val:v)
        {
            count++;
            if(count%2!=0)
            {
            ans->next=new ListNode(val);
            ans=ans->next;
            }
            else
            {
               ans1->next=new ListNode(val);
               ans1=ans1->next; 
            }
            
        }
        ans->next=res1->next;
        return res->next;
    }
};