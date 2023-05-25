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
    ListNode* reverseList(ListNode* head, int n) 
    {
        if (head == NULL) 
            return NULL;
        
        int count = 0;
        ListNode* curr = head;
        ListNode* prev = NULL;
        
        while (count < n)
        {
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
            count++;
        }
        
        head->next = curr;
        return prev;
    }
    
    ListNode* reverseBetween(ListNode* head, int left, int right) 
    {
        if (left == right)
        {
            return head;
        }
        
        int n = right - left + 1;
        ListNode* temp = head;
        ListNode* prev = NULL;
        int count = 1;
        
        while (count < left)
        {
            prev = temp;
            temp = temp->next;
            count++;
        }
        
        ListNode* reversedHead = reverseList(temp, n);
        
        if (prev != NULL)
        {
            prev->next = reversedHead;
        } 
        
        else
        {
            head = reversedHead;
        }
        
        return head;
    }
};
