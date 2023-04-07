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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int>list;
        while(list1!=NULL && list2!=NULL)
        {
            if(list1->val<list2->val)
            {
                list.push_back(list1->val);
                list1=list1->next;
            }
            else
            {
                list.push_back(list2->val);
                list2=list2->next;
            }
        }
        while (list1 != NULL) 
        {
            list.push_back(list1->val);
            list1 = list1->next;
        }
        while (list2 != NULL)
        {
            list.push_back(list2->val);
            list2 = list2->next;
        }
           // sort(list.begin(),list.end());
            ListNode* head = NULL;
            ListNode* tail = NULL;
            for (int val : list)
            {
                ListNode* new_node = new ListNode(val);
                if (head == NULL)
                {
                    head = new_node;
                    tail = new_node;
                }
                else
                {
                    tail->next = new_node;
                    tail = tail->next;
                }
        }
        return head;
       
    }
};