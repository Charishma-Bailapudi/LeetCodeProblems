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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    {
        if(l1==NULL || l2==NULL)
            return l1==NULL?l2:l1;
        
        ListNode* ans=new ListNode();
        ListNode* result=ans;
        
        int carry=0;
        while(l1!=NULL && l2!=NULL)
        {
            int sum = carry + l1->val + l2->val;
            int digit = sum%10;
            carry = sum/10;
            
            l1 = l1->next;
            l2 = l2->next;
            
            result->next = new ListNode(digit); 
            cout<<result->next->val<<endl;
            result = result->next;  
        }
        while(l1!=NULL)
        {
            int sum = carry + l1->val ;
            int digit = sum%10;
            carry = sum/10;
            l1 = l1->next;
            
            result->next = new ListNode(digit);   
            result = result->next;  
        }
        while( l2!=NULL)
        {
            int sum = carry+ l2->val;
            int digit = sum%10;
            carry = sum/10;
            
            l2 = l2->next;
            result->next = new ListNode(digit);   
            result = result->next;  
        }
         if(carry > 0) {
            result->next = new ListNode(carry);
            result = result->next;
        }
        return ans->next;
    }
};