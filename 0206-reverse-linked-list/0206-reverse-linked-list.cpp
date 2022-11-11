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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==nullptr)
        {
            return head;
        }
        ListNode *newhead=reverseList(head->next);
         ListNode *nexthead=head->next;
        nexthead->next=head;
        head->next=NULL;
        return newhead;
        
        
    }
};