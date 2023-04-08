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
    ListNode* rotateRight(ListNode* head, int k)
    {
       
        if(head==NULL)
            return head;
        if(head->next==NULL)
            return head;
        int len=length(head);
        k=k%len;
        if(k==0)
            return head;
       ListNode* temp=head;
       ListNode* prev=NULL;
       while(temp->next!=NULL)
       {
            prev=temp;
            temp=temp->next;
       }
    prev->next=NULL;
    temp->next=head;
    head=temp;
    return rotateRight(head, k-1);
    
    }
};