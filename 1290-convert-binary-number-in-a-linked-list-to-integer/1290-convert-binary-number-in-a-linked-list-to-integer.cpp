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
    // int getlen(ListNode* head)
    // {
    //     int count=0;
    //     while(head!=NULL)
    //     {
    //         count++;
    //         head=head->next;
    //     }
    //     return count;
    // }
    
    int getDecimalValue(ListNode* head)
    {
//         int sum=0;
//         int length=getlen(head);
//         for(int i=length-1;i>=0;i--)
//         {
            
//             sum=sum+(head->val)*pow(2,i);
//             head=head->next;
//         }
//         return sum;
        
        unsigned int ans = 0;
        while(head!=NULL)
        {
            ans <<= 1;
            ans = (ans | (head->val));
            head = head->next;
        }
        return ans;
    }
};