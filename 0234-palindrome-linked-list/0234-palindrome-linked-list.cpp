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
    bool isPalindrome(ListNode* head) {
        vector<int>num;
        
        while(head!=NULL)
        {
            num.push_back(head->val);
            head=head->next;
        }
        vector<int>revnum;
        revnum=num;
        reverse(revnum.begin(),revnum.end());
        if(num==revnum)
            return true;
        else
            return false;
        
    }
};