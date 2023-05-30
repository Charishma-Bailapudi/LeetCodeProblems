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
//     int pairSum(ListNode* head)
//     {
//         vector<int>v;
//         ListNode* temp=head;
//         while(temp!=NULL)
//         {
//             v.push_back(temp->val);
//             temp=temp->next;
//         }
//         int start=0,end=v.size()-1;
//         int tot,sum=0;
//         while(start<=end)
//         {
//             tot=v[start]+v[end];
//             if(tot>sum)
//                 sum=tot;
//             start++;
//             end--;
//         }
//         return sum;
//     }
// };
class Solution {
public:
    ListNode* reverseList(ListNode* head)
    {
        if (head == NULL) {
            return NULL;
        }
        ListNode* curr = head;
        ListNode* prev = NULL;
        while (curr->next != NULL) 
        {
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        curr->next = prev;
        return curr;
    }

    int pairSum(ListNode* head)
    {
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* temp=slow->next;
        ListNode* reverse = reverseList(temp);
        slow->next=NULL;
        int tot,sum=0;
        while (head && reverse)
        {
            tot = head->val + reverse->val;
            // cout<<"tot"<<tot<<endl;
            if (tot >= sum)
                sum = tot;
            head = head->next;
            reverse = reverse->next;
        }
        return sum;
    }
};
