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
    ListNode* reverse(ListNode* head,int l,int k)
    {
         if(head==NULL)
        {
            return NULL;
        }
        if(l<k)
            return head;
        
        ListNode*next=NULL;
        ListNode* curr=head;
        ListNode*prev=NULL;
        int count=0;
        
        while(curr!=NULL && count<k)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            count++;
        }
        
        if(next!=NULL)
            head->next=reverse(next,l-k,k);
        return prev;
    }
public:
   int length(ListNode* head)
    {
            int count=0;
        while(head!=NULL)
        {
            head=head->next;
            count++;
        }
        return count;
    }         
public:
    
    ListNode* reverseKGroup(ListNode* head, int k) {
       int l=length(head);
        return reverse(head,l,k);
    }
};