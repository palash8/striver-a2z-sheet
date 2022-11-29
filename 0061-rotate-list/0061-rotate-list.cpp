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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode*temp=head;
        int count=1;
        if(head==NULL)
        {
            return NULL;
        }
        while(temp->next!=NULL)
        {
            temp=temp->next;
            count++;
        }
        int remainder=k%count;
        if(remainder!=0)
        {
            ListNode *dummy=head;
             ListNode *previous=head;
            
            int left=count-remainder-1;
            while(left--)
            {
                dummy=dummy->next;
            }
            temp->next=head;
            head=dummy->next;
            dummy->next=NULL;
            
        }
        return head;
    }
};