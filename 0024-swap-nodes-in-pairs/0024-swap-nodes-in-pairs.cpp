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
     ListNode* reverse(ListNode* head,int l)
    {    
        ListNode*next=NULL;
        ListNode* curr=head;
        ListNode*prev=NULL;
        int count=0;
        
        while(curr!=NULL && count<2)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            count++;
        }
        
        if(next!=NULL)
            head->next=reverse(next,l-2);
        return prev;
    }
    int length(ListNode* head)
    {
        int count=0;
        while(head!=NULL)
        {
            count++;
            head=head->next;
        }
        return count;
    }
public:
    ListNode* swapPairs(ListNode* head) {
         if(head==NULL || head->next==NULL)
        {
            return head;
        }
        int l=length(head);
        return reverse(head,l);
    }
};