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
        while(head->next!=NULL)
        {
            count+=1;
            head=head->next;
        }
        return count;
    }
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int l=length(head);
        int targetIndex = l - n;
        ListNode* temp = head;
        ListNode* prev = NULL;
        
        for (int i = 0; i <= targetIndex; i++)
        {
            prev = temp;
            temp = temp->next;
        }
        
        if (prev == NULL)
        {
            head = temp->next;
        } 
        else
        {
            prev->next = temp->next;
        }
        return head;
    }
  
};