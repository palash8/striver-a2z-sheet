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
    ListNode* reverseList(ListNode* head) 
    {
        //cases with less than 2 nodes
        if(head==nullptr or head->next==nullptr)
        {
            return head;
        }
        //other cases require use of 3 pointers
        ListNode *temp=head;
        ListNode *prev=nullptr;
        ListNode *forward=temp->next;
        
        while(forward!=nullptr)
        {
            temp->next=prev;
            prev=temp;
            temp=forward;
            forward=forward->next;
        }
        temp->next=prev;
        return temp;
        
    }
};