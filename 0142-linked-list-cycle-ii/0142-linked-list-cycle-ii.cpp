/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) 
    {
        ListNode *slow=head;
        ListNode *fast=head;
        ListNode *temp=head;
        
        while(fast and fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            {
                while(slow!=temp)
                {
                    temp=temp->next;
                    slow=slow->next;
                }
                return slow;
            }
        }
        
        return NULL;
    }
};