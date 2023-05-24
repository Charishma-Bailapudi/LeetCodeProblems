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
// class Solution {
// public:
//     ListNode* removeElements(ListNode* head, int val)
//     {
//        ListNode* dummy = new ListNode;
//         dummy ->next = head;
//         ListNode* curr = dummy;
//         while(curr -> next)
//         {
//             if(curr -> next -> val == val)
//             {
//                 curr -> next = curr -> next -> next;
//             } 
//             else
//             {
//                 curr = curr -> next;
//             }
//         }
//         return dummy -> next;
//     }
// };
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode*prev= head;
        ListNode*curr= head;

        while(curr != NULL){
        //when head node is the node to be removed from linked list
            if(head->val == val){
                head= head->next;
                prev= head;
                curr= head;
            }
        //when current node is the node to be deleted
            else if(curr->val==val){
                prev->next= curr->next;
                curr= curr->next;
            }
        // when neither head or curr node is to be deleted
        // then we simply update values of curr and prev pointer
            else{
                prev= curr;
                curr= curr->next;
            }
        }
        return head;
    }
};